// 7.31 (Selection Sort) A selection sort searches an array looking for the
// smallest element. Then, the smallest element is swapped with the first
// element of the array. The process is repeated for the subarray beginning
// with the second element of the array. Each pass of the array results in one
// element being placed in its proper location. This sort performs comparably
// to the insertion sort—for an array of n elements, n – 1 passes must be made,
// and for each subarray, n – 1 comparisons must be made to find the smallest
// value. When the subarray being processed contains one element, the array is
// sorted. Write recursive function selectionSort to perform this algorithm.

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
int ProcessSelectionSort(T array[], int size) {
  T temp;
  int idx;
  int scan_times = 0;

  if (size <= 1) { return 0; }

  idx = 0;
  for (int i = 1; i < size; i++) {
    scan_times++;
    if (array[idx] > array[i]) { idx = i; }
  }

  temp = array[0];
  array[0] = array[idx];
  array[idx] = temp;

  return scan_times + ProcessSelectionSort(&array[1], size - 1);
}

int main() {
  int scan_times = 0;
  int arr[] = {14, 98, 23, 27, 72, 28, 12, 42, 23, 82};

  std::cout << "Before sorting:\t";
  PrintArray(arr, sizeof(arr)/sizeof(int));

  scan_times = ProcessSelectionSort(arr, sizeof(arr)/sizeof(int));

  std::cout << "After sorting:\t";
  PrintArray(arr, sizeof(arr)/sizeof(int));

  std::cout << "The scan times is " << scan_times << std::endl;

  return 0;
}
