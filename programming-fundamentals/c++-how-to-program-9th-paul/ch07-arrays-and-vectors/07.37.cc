// 7.37 (Find the Minimum Value in an Array) Write a recursive function
// recursiveMinimum that takes an integer array, a starting subscript and an
// ending subscript as arguments, and returns the smallest element of the
// array. The function should stop processing and return when the starting
// subscript equals the ending subscript.

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
T GetMinRecursive(T array[], int size) {
  if (size <= 1) return array[0];
  T min = GetMinRecursive(array, size - 1);
  return (array[size - 1] > min) ? min : array[size - 1];
}

int main() {
  int arr[] = {14, 98, 23, 27, 72, 28, 12, 42, 23, 82};

  std::cout << "Array: ";
  PrintArray(arr, sizeof(arr)/sizeof(int));
  std::cout << "Min: " << GetMinRecursive(arr, sizeof(arr)/sizeof(int));
  std::cout << std::endl;

  return 0;
}
