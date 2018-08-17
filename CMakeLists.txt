cmake_minimum_required(VERSION 3.0)
project(rif)

# message("============== CMAKE ===========================================")

function(main)
    add_subdirectory(external/pybind11)
    build_python_bindings("")
endfunction()


if(NOT DEFINED CMAKE_LIBRARY_OUTPUT_DIRECTORY)
    message("CMAKE_LIBRARY_OUTPUT_DIRECTORY not defined, setting to .")
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY .)
endif()

if(DEFINED BOOST_ROOT)
    message("cmake: using BOOST_ROOT " ${BOOST_ROOT})
    include_directories(${BOOST_ROOT}/include)
    link_directories(${BOOST_ROOT}/lib)
else()
    message("cmake: NOT using BOOST_ROOT")
endif()

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} $ENV{CXXFLAGS}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DCXX11 -DCXX14")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-deprecated-declarations")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -w")
set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} $ENV{LDFLAGS}")

if(${CMAKE_BUILD_TYPE} MATCHES "Release")
    # set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O0")
    # set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -ffast-math") # eigen xform perf worse!!
    # set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -funroll-loops")
    # set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -march=native")
endif()

include_directories("external/include")
include_directories("src/rif")
include_directories("src")

function(copy_py_to_liboutdir)
    # message("-------------- CMAKE copy_py_to_liboutdir ----------")
    execute_process(COMMAND python ${CMAKE_SOURCE_DIR}/tools/cp_filtered.py
        ${CMAKE_SOURCE_DIR}/src/rif ${CMAKE_LIBRARY_OUTPUT_DIRECTORY}/rif .py .gz .dat .csv .txt .pdb .pdf .pkl .h5 .sym
        RESULT_VARIABLE STATUS)
    if(NOT "${STATUS}" STREQUAL "0")
        message(FATAL_ERROR "cp_filtered.py failed: ${STATUS}")
    endif()
endfunction()

function(build_python_bindings)
    # message("-------------- CMAKE build_python_bindings ----------------------------------------")
    set(SRCGEN ${CMAKE_SOURCE_DIR}/tools/pybind_source_gen.py)
    FILE(GLOB_RECURSE PY_CPP "./src/rif/[0-9a-zA-Z_]*.pybind.cpp")
	copy_py_to_liboutdir()

    add_custom_command(
        OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/_rif.gen.cpp
        COMMAND python ${SRCGEN} ${CMAKE_SOURCE_DIR}/src/rif ${CMAKE_CURRENT_BINARY_DIR}
        DEPENDS src/rif/util/_rif.gen.cpp.jinja ${PY_CPP} ${SRCGEN})
    pybind11_add_module(_rif ${CMAKE_CURRENT_BINARY_DIR}/_rif.gen.cpp ${PY_CPP} ${SRCGEN} NO_EXTRAS)
    target_link_libraries( _rif PRIVATE ${extra_libs} )

endfunction()

main()

# message("============== CMAKE DONE =========================================================")
