// 8.15 (Quicksort) You’ve previously seen the sorting techniques of the bucket
// sort and selection sort. We now present the recursive sorting technique
// called Quicksort. The basic algorithm for a single-subscripted array of
// values is as follows:
//
// a) Partitioning Step: Take the first element of the unsorted array and
// determine its final location in the sorted array (i.e., all values to the
// left of the element in the array are less than the element, and all values
// to the right of the element in the array are greater than the element). We
// now have one element in its proper location and two unsorted subarrays.
//
// b) Recursive Step: Perform Step1 on each unsorted subarray.
//
// Each time Step 1 is performed on a subarray, another element is placed in
// its final location of the sorted array, and two unsorted subarrays are
// created. When a subarray consists of one element, that subarray must be
// sorted; therefore, that element is in its final location.
//
// The basic algorithm seems simple enough, but how do we determine the final
// position of the first element of each subarray? As an example, consider the
// following set of values (the element between | | is the partitioning element
// — it will be placed in its final location in the sorted array):
//      |37| 2 6 4 89 8 10 12 68 45
//
// a) Starting from the rightmost element of the array, compare each element
// with 37 until an element less than 37 is found. Then swap 37 and that
// element. The first element less than 37 is 12, so 37 and 12 are swapped.
// The values now reside in the array as follows:
//      12 2 6 4 89 8 10 |37| 68 45
//
// b) Starting from the left of the array, but beginning with the element after
// 12, compare each element with 37 until an element greater than 37 is found.
// Then swap 37 and that element. The first element greater than 37 is 89, so
// 37 and 89 are swapped. The values now reside in the array as follows:
//      12 2 6 4 |37| 8 10 89 68 45
//
// c) Starting from the right, but beginning with the element before 89,
// compare each element with 37 until an element less than 37 is found. Then
// swap 37 and that element. The first element less than 37 is 10, so 37 and
// 10 are swapped. The values now reside in the array as follows:
//      12 2 6 4 10 8 |37| 89 68 45
//
// d) Starting from the left, but beginning with the element after 10, compare
// eachelement with 37 until an element greater than 37 is found. Then swap 37
// and that element. There are no more elements greater than 37, so when we
// compare 37 with itself, we know that 37 has been placed in its final
// location of the sorted array.
//
// Once the partition has been applied to the array, there are two unsorted
// subarrays. The subarray with values less than 37 contains 12, 2, 6, 4, 10
// and 8. The subarray with values greater than 37 contains 89, 68 and 45.
// The sort continues with both subarrays being partitioned in the same manner
// as the original array.

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
int Partition(T *array, int low, int high) {
  int pivot = low;
  int start = high;
  bool is_done = true;
  T hold;

  while (true) {
    is_done = true;
    for (int i = start; i > pivot; i--) {
      if (array[i] < array[pivot]) {
        hold = array[pivot];
        array[pivot] = array[i];
        array[i] = hold;
        start = pivot - 1;
        pivot = i;
        is_done = false;
        break;
      }
    }

    if (is_done) return pivot;

    is_done = true;
    for (int i = start; i < pivot; i++) {
      if (array[i] > array[pivot]) {
        hold = array[pivot];
        array[pivot] = array[i];
        array[i] = hold;
        start = pivot + 1;
        pivot = i;
        is_done = false;
        break;
      }
    }

    if (is_done) return pivot;
  }

  return -1;
}

template <typename T>
void ProcessQuickSort(T *array, int low, int high) {
  int pivot;

  if (low >= high) return;
  pivot = Partition(array, low, high);
  ProcessQuickSort(array, low, pivot - 1);
  ProcessQuickSort(array, pivot + 1, high);
}

int main() {
  int scan_times = 0;
  int arr[] = {14, 98, 23, 27, 72, 28, 12, 42, 23, 82};

  std::cout << "Before sorting:\t";
  PrintArray(arr, sizeof(arr)/sizeof(int));

  ProcessQuickSort(arr, 0, sizeof(arr)/sizeof(int) - 1);

  std::cout << "After sorting:\t";
  PrintArray(arr, sizeof(arr)/sizeof(int));

  return 0;
}