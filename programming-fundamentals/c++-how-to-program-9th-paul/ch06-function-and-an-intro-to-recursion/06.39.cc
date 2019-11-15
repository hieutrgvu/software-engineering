// 6.39 (Towers of Hanoi: Iterative Version) Any program that can be implemented
// recursively can be implemented iteratively, although sometimes with more
// difficulty and less clarity. Try writing an iterative version of the Towers
// of Hanoi. If you succeed, compare your iterative version with the recursive
// version developed in Exercise 6.38. Investigate issues of performance,
// clarity and your ability to demonstrate the correctness of the programs.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <cmath>

void MoveTowerOfHanoi(int num_disks, int peg_src, int peg_dst, int peg_tmp) {
  int move_num = pow(2, num_disks) - 1;

  for (int i = 1; i <= move_num; i++) {
    if (i % 3 == 1) {
      std::cout << peg_src << " <-> " << peg_dst << std::endl;
    }
    else if (i % 3 == 2) {
      std::cout << peg_src << " <-> " << peg_tmp << std::endl;
    }
    else {
      std::cout << peg_tmp << " <-> " << peg_dst << std::endl;
    }
  }
}

int main() {
  int n;

  std::cout << "There are 3 pegs, 1, 2 and 3. Move from peg 1 to 3.\n"
    << "Input the number of disks on peg 1: ";
  std::cin >> n;
  MoveTowerOfHanoi(n, 1, 3, 2);

  return 0;
}
