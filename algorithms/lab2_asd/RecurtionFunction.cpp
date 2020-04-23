#include "RecurtionFunction.hpp"

double RecurtionFunction_expression(int number) {

  double answer = 0;
  if (number < 0)
    return -1;
  if (number == 0)
    return 3;
  if (number == 1)
    return 9;
  answer = RecurtionFunction_expression(number - 1) * 3 / number;

  return answer;
}