#include <iostream>
#include <string>

#include "Stack.hpp"
#include "RecurtionFunction.hpp"

using namespace std;

int main() {

  stack<char> math_expression; /* create STL stack. */
  string str_expression; /* C++-string for user string. */
  double recurtion_answer = 0; /* a variable for recurt. func. answer. */
  int number = 0; /* a variable for number of iteration for recurt. func.*/

  cout << "Enter a string: ";
  cin >> str_expression;
  for (char i = 0; i < str_expression.length(); i++) {
    if (str_expression[i] == '(')
      math_expression.push(str_expression[i]);
    else if (str_expression[i] == ')') {
      math_expression.pop();
    }
  }

  if (math_expression.empty())
    cout << "\nEverything is cool!\n";
  else 
    cout << "\nBad luck...\n";

  cout << "\nEnter a number for recurtion function: ";
  cin >> number;
  recurtion_answer = RecurtionFunction_expression(number);
  cout << "\n" << recurtion_answer << endl;

  return 0;
}