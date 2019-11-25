// 7.17 (Dice Rolling) Write a program that simulates the rolling of two dice.
// The program should use rand to roll the first die and should use rand again
// to roll the second die. The sum of the two values should then be calculated.
// [Note: Each die can show an integer value from 1 to 6, so the sum of the two
// values will vary from 2 to 12, with 7 being the most frequent sum and 2 and
// 12 being the least frequent sums.] Figure 7.26 shows the 36 possible
// combinations of the two dice. Your program should roll the two dice 36,000
// times. Use a one-dimensional array to tally the numbers of times each
// possible sum appears. Print the results in a tabular format. Also,
// determine if the totals are reasonable (i.e., there are six ways to roll a
// 7, so approximately one-sixth of all the rolls should be 7).

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <stdlib.h>
#include <time.h>

int main() {
  int dice_1;
  int dice_2;
  int arr[11] = { };

  srand (time(NULL));

  for (int i = 0; i < 3600; i++) {
    dice_1 = 1 + rand() % 6;
    dice_2 = 1 + rand() % 6;
    arr[dice_1 + dice_2 - 2]++;
  }

  std::cout << "Total rolling: 3600" << std::endl;
  std::cout << "Sum\t" << "Times" << std::endl;
  for (int i = 0; i < sizeof(arr)/sizeof(int); i++) {
    std::cout << i + 2 << "  \t" << arr[i] << std::endl;
  }

  return 0;
}
