#include <gtest/gtest.h>

#include <map>
#include "geom/rand_geom.hpp"
#include "numeric/lattice.hpp"
#include "numeric/util.hpp"

namespace rif {
namespace geom {
namespace rand_xfrom_test {

using std::cout;
using std::endl;

// std::mt19937 & rng,
// Eigen::Transform<T,3,Eigen::AffineCompact> & x,
// double cart_bound, double quat_bound

template <int MODE, int OPTS = Eigen::ColMajor>
void test_cart_helper() {
  typedef Eigen::Transform<double, 3, MODE, OPTS> Xform;

  int NSAMP = 1000;
#ifdef SCHEME_BENCHMARK
  NSAMP = 10000;
#endif

  std::mt19937 rng((unsigned int)time(0) + 934875);

  double cart_bound = 6.0, max_cart = 0.0;
  Xform x;

  for (int i = 0; i < NSAMP; ++i) {
    rand_xform_quat(rng, x, cart_bound, 0.0);
    EXPECT_LE(x.translation().norm(), cart_bound);
    max_cart = std::max(max_cart, x.translation().norm());
  }
  EXPECT_LE(cart_bound * 0.99, max_cart);
}

template <int MODE, int OPTS = Eigen::ColMajor>
void test_ori_helper() {
  typedef Eigen::Transform<double, 3, Eigen::AffineCompact> Xform;

  int NSAMP = 10;
#ifdef SCHEME_BENCHMARK
  NSAMP = 1000;
#endif

  std::mt19937 rng((unsigned int)time(0) + 934875);
  std::uniform_real_distribution<> runif;

  for (int a = 0; a < NSAMP; ++a) {
    double ANG = 0.1 + runif(rng) * 119.8;
    double quat_bound = numeric::deg2quat(ANG), max_ang = 0.0;

    Xform x;
    for (int i = 0; i < 100; ++i) {
      rand_xform_quat(rng, x, 0.0, quat_bound);
      double ang = Eigen::AngleAxisd(x.rotation()).angle() * 180.0 / M_PI;
      max_ang = std::max(max_ang, ang);
      ASSERT_LE(ang, ANG);
    }
    ASSERT_LE(ANG * 0.95, max_ang);
  }
}
TEST(rand_xform_quat, cart_correctness) {
  test_cart_helper<Eigen::Affine, Eigen::ColMajor>();
  test_cart_helper<Eigen::Affine, Eigen::RowMajor>();
  test_cart_helper<Eigen::AffineCompact>();
}

TEST(rand_xform_quat, ori_correctness) {
  test_ori_helper<Eigen::Affine, Eigen::ColMajor>();
  test_ori_helper<Eigen::Affine, Eigen::RowMajor>();
  test_ori_helper<Eigen::AffineCompact>();
}

TEST(rand_xform, rand_xform_sphere) {
  typedef Eigen::Transform<float, 3, Eigen::AffineCompact> Xform;

  int const NSAMP = 1000;

  std::mt19937 rng((unsigned int)time(0) + 934875);

  float const radius_bound = 1.0;
  float const degrees_bound = 10.0;
  float const radians_bound = degrees_bound * M_PI / 180.0;

  float maxrad = 0, maxang = 0;
  for (int a = 0; a < NSAMP; ++a) {
    Xform x;
    rand_xform_sphere(rng, x, radius_bound, radians_bound);
    float thisrad = x.translation().norm();
    float thisang = Eigen::AngleAxisf(x.rotation()).angle() * 180.0 / M_PI;
    maxrad = std::max(maxrad, thisrad);
    maxang = std::max(maxang, thisang);
    ASSERT_LE(thisrad, radius_bound);
    ASSERT_LE(thisang, degrees_bound + 0.0001);
  }
  ASSERT_LE(radius_bound * 0.98f, maxrad);
  ASSERT_LE(degrees_bound * 0.98f, maxang);
}
}
}
}
