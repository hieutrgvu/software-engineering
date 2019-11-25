// 7.33 (Linear Search) Modify the program in Fig. 7.18 to use recursive
// function linearSearch to perform a linear search of the array. The function
// should receive an integer array and the size of the array as arguments. If
// the search key is found, return the array subscript; otherwise, return –1.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

template <typename T>
void PrintArray(T array[], int size) {
  for (int i = 0; i < size; i++) {
    std::cout << array[i] << ' ';
  }
  std::cout << std::endl;
}

template <typename T>
int ProcessLinearSearch(T array[], int size, T key) {
  if (size == 0) return -1;
  if (array[size - 1] == key) return size - 1;
  return ProcessLinearSearch(array, size - 1, key);
}

int main() {
  int idx = 0;
  int arr[] = {14, 98, 23, 27, 72, 28, 12, 42, 23, 82};

  std::cout << "Array: ";
  PrintArray(arr, sizeof(arr)/sizeof(int));

  idx = ProcessLinearSearch(arr, sizeof(arr)/sizeof(int), 42);

  std::cout << idx << std::endl;

  return 0;
}
