#include <iostream>
#include <ctime>
#include <cstdlib>
#include <chrono>

#include "sortfunc.hpp"
#include "interpolation_search.hpp"
#include "polar_rnd.hpp"
#include "check_call_parameters.h"

using namespace std;
using namespace chrono;

int main(int argc, char* argv[]) {

	srand(time(0));

  // Check call parameters for our task.
  int* parameters_array = check_call_parameters(argc, argv);

  cout << "\nDefault array:";
	int* numbers_array = new int[parameters_array[0]];
	for (int i = 0; i < parameters_array[0]; i++) {
		numbers_array[i] = rand() % 100 + 10;
    cout << " " << numbers_array[i];
	}

  // TASK #1.
  // Sorting the array that was generated above 
  cout << "\n\nTASK 1(INSERTION SORT):\n";
	auto now = time_point_cast<microseconds>(system_clock::now());
	int* sort_array = insertion_sort(numbers_array, parameters_array[0]);
  cout << "\nSorted array:";
  for (auto i = 0; i < parameters_array[0]; i++) {
    cout << " " << sort_array[i];
  }
	cout << "\n\nTime to algorithm (microseconds): " << (time_point_cast<microseconds>(system_clock::now()) - now).count();

  // TASK #2.
  // This fucntion use sorted array from first task to find user key.
  cout << endl;
  int what_find;
  int task2_array[] {1, 2, 4, 6, 7, 89, 123, 231, 1000, 1235};
  cout << "\nTASK 2(INTERPOLATION SEARCH): ";
  for (int i = 0; i < 10; i++) {
    cout << task2_array[i] << " ";
  }
  cout << "\nEnter the number to search: ";
  cin >> what_find;
  interpolation_search(task2_array, what_find);

  // TASK #3.
  // Polar randomizer.
  cout << "\nTASK 3(POLAR_RND):";
  double* task3_array = polar_rnd();
  for (int i = 0; i < 10; i++) {
    cout << " " << task3_array[i];
  }
  cout << "\n";

  delete[] parameters_array;
  delete[] numbers_array;
  delete[] sort_array;
  delete[] task3_array;

	return 0;
}