// 7.12 (Bubble Sort Enhancements) The bubble sort described in Exercise 7.11
//is inefficient for large arrays. Make the following simple modifications to
// improve the performance of the bubble sort:
// a) After the first pass, the largest number is guaranteed to be in the
// highest-numbered element of the array; after the second pass, the two
// highest numbers are “in place,” and so on. Instead of making nine
// comparisons on every pass, modify the bubble sort to make eight comparisons
// on the second pass, seven on the third pass, and so on.
// b) The data in the array may already be in the proper order or near-proper
// order, so why make nine passes if fewer will suffice? Modify the sort to
// check at the end of each pass if any swaps have been made. If none have been
// made, then the data must already be in the proper order, so the program
// should terminate. If swaps have been made, then at least one more pass is
// needed.

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
  T temp;
  int scan_times = 0;
  bool is_swap = false;

  for (int i = 0; i < (size - 1); i++) {
    is_swap = false;

    for (int j = 0; j < (size - 1 - i); j++) {
      if (array[j] > array[j + 1]) {
        is_swap = true;
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
      scan_times++;
    }

    if (is_swap == false) break;
  }

  return scan_times;
}

int main() {
  int scan_times = 0;
  int arr[] = {14, 98, 23, 27, 72, 28, 12, 42, 23, 82};
  //int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  std::cout << "Before sorting:\t";
  PrintArray(arr, sizeof(arr)/sizeof(int));

  scan_times = ProcessBubbleSort(arr, sizeof(arr)/sizeof(int));

  std::cout << "After sorting:\t";
  PrintArray(arr, sizeof(arr)/sizeof(int));

  std::cout << "The scan times is " << scan_times << std::endl;

  return 0;
}
