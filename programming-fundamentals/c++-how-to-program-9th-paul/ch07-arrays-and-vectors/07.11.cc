// 7.11 (Bubble Sort) In the bubble sort algorithm, smaller values gradually
// “bubble” their way upward to the top of the array like air bubbles rising
// in water, while the larger values sink to the bottom. The bubble sort
// makes several passes through the array. On each pass, successive pairs of
// elements are compared. If a pair is in increasing order (or the values are
// identical), we leave the values as they are. If a pair is in decreasing
// order, their values are swapped in the array. The comparisons on each pass
// proceed as follows—the 0th element value is compared to the 1st, the 1st is
// compared to the 2nd, the 2nd is compared to the third, ..., the second-to-
// last element is compared to the last element. Write a program that sorts an
// array of 10 integers using bubble sort.

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
int ProcessBubbleSort(T array[], int size) {
  int scan_times = 0;
  T temp;

  for (int i = 0; i < (size - 1); i++) {
    for (int j = 0; j < (size - 1); j++) {
      if (array[j] > array[j + 1]) {
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
      scan_times++;
    }
  }

  return scan_times;
}

int main() {
  int scan_times;
  int arr[] = {14, 98, 23, 27, 72, 28, 12, 42, 23, 82};

  std::cout << "Before sorting:\t";
  PrintArray(arr, sizeof(arr)/sizeof(int));

  scan_times = ProcessBubbleSort(arr, sizeof(arr)/sizeof(int));

  std::cout << "After sorting:\t";
  PrintArray(arr, sizeof(arr)/sizeof(int));

  std::cout << "The scan times is " << scan_times << std::endl;

  return 0;
}
