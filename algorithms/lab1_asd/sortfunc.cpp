#include <iostream>

#include "sortfunc.hpp"

int* insertion_sort(int* numbers_arr, int argc) {

  int* cpy_arr = new int[argc];
  // cpy src array to temp array.
  for (int i = 0; i < argc; i++) {
    cpy_arr[i] = numbers_arr[i];
  }

  for (int i = 1; i < argc; i++) {
    for (int j = i; j > 0 && cpy_arr[j - 1] > cpy_arr[j]; j--) {
      std::swap(cpy_arr[j - 1], cpy_arr[j]);
    }
  }
  return cpy_arr;
}