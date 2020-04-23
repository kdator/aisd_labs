#include <iostream>

#include "interpolation_search.hpp"

using namespace std;

void interpolation_search(int* array, unsigned int key) {

  int dir_pos = 0;
  int fir_pos = 0;
  int lst_pos = 9;
 
  int what_find = key;
  bool found;
 
  for (found = false; (array[fir_pos] < what_find) && 
                      (array[lst_pos] > what_find) && 
                      !found; ) {
    dir_pos = fir_pos + ((what_find - array[fir_pos]) * 
              (lst_pos - fir_pos)) / (array[lst_pos] - array[fir_pos]);
    if (array[dir_pos] < what_find)   
      fir_pos = dir_pos + 1;
    else if (array[dir_pos] > what_find)   
      lst_pos = dir_pos - 1;
    else
      found = true;
  }

  if (array[fir_pos] == what_find) 
    cout << "\n" << what_find << " founded in element " << fir_pos << endl;
  else if (array[lst_pos] == what_find) 
    cout << "\n" << what_find << " founded in element " << lst_pos << endl;
  else
    cout << "\nSorry. Not found" << endl;
}