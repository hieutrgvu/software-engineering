// 7.39 (Dice Rolling with vector) Modify the dice-rolling program you created
// in Exercise 7.17 to use a vector to store the numbers of times each possible
// sum of the two dice appears.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>

int main() {
  int dice_1;
  int dice_2;
  std::vector<int> arr(11);

  srand (time(NULL));

  for (int i = 0; i < 3600; i++) {
    dice_1 = 1 + rand() % 6;
    dice_2 = 1 + rand() % 6;
    arr[dice_1 + dice_2 - 2]++;
  }

  std::cout << "Total rolling: 3600" << std::endl;
  std::cout << "Sum\t" << "Times" << std::endl;
  // std::cout << arr;
  for (int i = 0; i < arr.size(); i++) {
    std::cout << i + 2 << "  \t" << arr[i] << std::endl;
  }

  return 0;
}
