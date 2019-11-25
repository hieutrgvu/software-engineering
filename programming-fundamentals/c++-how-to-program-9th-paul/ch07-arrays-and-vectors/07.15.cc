// 7.15 (Duplicate Elimination) Use a one-dimensional array to solve the
// following problem. Read in 20 numbers, each of which is between 10 and 100, 
// inclusive. As each number is read, validate it and store it in the array
// only if it isn’t a duplicate of a number already read. After reading all the
// values, display only the unique values that the user entered. Provide for
// the “worst case” in which all 20 numbers are different. Use the smallest
// possible array to solve this problem.

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
bool IsUnique(T array[], int size, T element) {

  for (int i = 0; i < size ; i++) {
    if (array[i] == element) return false;
  }

  return true;
}

int main() {
  const int arr_size = 20;
  int size = 0;
  int arr[arr_size] = { };

  while (size < arr_size) {
    std::cin >> arr[size];
    if (IsUnique(arr, size, arr[size])) size++;
  }

  std::cout << "The 20 unique number input is: ";
  PrintArray(arr, arr_size);

  return 0;
}
