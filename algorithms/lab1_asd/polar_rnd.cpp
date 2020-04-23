#include <iostream>
#include <ctime>
#include <cmath>

#include "polar_rnd.hpp"

using namespace std;

double* polar_rnd() {

  double* num_arr = new double[10];
  double n1, n2;
  int i = 0;
  while (i < 10) {
    double u1 = static_cast<double>(rand()) / RAND_MAX;
    double u2 = static_cast<double>(rand()) / RAND_MAX;
    double v1 = 2 * u1 - 1;
    double v2 = 2 * u2 - 1;
    double s = v1*v1 + v2*v2;
    if (s >= 1)
      continue;
    else {
      n1 = v1*sqrt((-2 * log(s) / s));
      n2 = v2*sqrt((-2 * log(s) / s));
      num_arr[i] = n1;
      num_arr[i + 1] = n2;
      i += 2;
    }
  }
  return num_arr;
}