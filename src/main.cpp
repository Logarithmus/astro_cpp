#include <astro/lambert_problem.hpp>
#include <math/const.hpp>
#include <math/vector3d.hpp>
#include <orbit/orbit.hpp>

#include <tests/astro/lambert_test.hpp>
#include <tests/astro/orbit_test.hpp>
#include <tests/astro/state_vectors_propagation_test.hpp>
#include <tests/math/acos_test.hpp>

#include <iostream>
#include <random>

int main() {
  using namespace astro_cpp;
  std::ios::sync_with_stdio(false);
  std::cout.precision(16);

  tests::kepler_solver_test(1000 * 1000);
  tests::acos_test(10);
  tests::lambert::lambert_problem(1000'000);
  tests::state_vectors_propagation(1000'000);

  return 0;
}
