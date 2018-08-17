import os
import re
import sys
import platform
import subprocess
import multiprocessing
from glob import glob
from collections import defaultdict

# assert sys.version_info.major > 2

# import numpy

from setuptools import setup, Extension, find_packages
from setuptools.command.build_ext import build_ext
from distutils.version import LooseVersion

class CMakeExtension(Extension):

    def __init__(self, name, sourcedir=''):
        Extension.__init__(self, name, sources=[])
        self.sourcedir = os.path.abspath(sourcedir)


class CMakeBuild(build_ext):
    def run(self):
        for ext in self.extensions:
            self.build_extension(ext)

    def build_extension(self, ext):
        extdir = os.path.abspath(os.path.dirname(build_ext.get_ext_fullpath(self, ext.name)))
        cmake_args = ['-DCMAKE_LIBRARY_OUTPUT_DIRECTORY=' + extdir,
                      '-DPYTHON_EXECUTABLE=' + sys.executable,
                      '-GNinja'
                      ]

        if 'CMAKE_OPTIONS' in os.environ:
            cmake_args += os.environ['CMAKE_OPTIONS'].split()

        ncpu = 4

        cmake_args += ['-DPYTHON_EXECUTABLE:FILEPATH=' + sys.executable, ]
        build_args = ['--config', "Release"]

        env = os.environ.copy()
        env['CXXFLAGS'] = '{} -DVERSION_INFO=\\"{}\\"'.format(
            env.get('CXXFLAGS', ''), self.distribution.get_version())

        os.makedirs(extdir, exist_ok=True)
        os.makedirs(self.build_temp, exist_ok=True)

        try:
            subprocess.check_call(
                ['cmake', ext.sourcedir] + cmake_args, cwd=self.build_temp, env=env)
            subprocess.check_call(
                ['cmake', '--build', '.'] + build_args, cwd=self.build_temp)
        except subprocess.CalledProcessError as e:
            sys.exit(e.returncode)

setup(
    name='rif',
    version=os.environ['GIT_DESCRIBE_TAG'],
    author='Will Sheffler',
    author_email='willsheffler@gmail.com',
    description='Rotamer Interaction Field protein design library',
    long_description='',
    url='https://github.com/willsheffler/rif',
    ext_modules=[CMakeExtension('_rif')],
    cmdclass=dict(build_ext=CMakeBuild),
    zip_safe=False,
)
