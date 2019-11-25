// 7.35 (Print an Array) Write a recursive function printArray that takes an
// array, a starting subscript and an ending subscript as arguments, returns
// nothing and prints the array. The function should stop processing and return
// when the starting subscript equals the ending subscript.


//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

template <typename T>
void PrintArray(T array[], int size) {
  if (size == 0) {
    std::cout<< std::endl;
    return;
  }
  std::cout << array[0] << ' ';
  PrintArray(&array[1], size - 1);
}

int main() {
  int idx = 0;
  int arr[] = {14, 98, 23, 27, 72, 28, 12, 42, 23, 82};

  std::cout << "Array: ";
  PrintArray(arr, sizeof(arr)/sizeof(int));

  return 0;
}
