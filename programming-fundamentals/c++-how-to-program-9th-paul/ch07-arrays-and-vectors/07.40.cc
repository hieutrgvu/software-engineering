// 7.40 (Find the Minimum Value in a vector) Modify your solution to
// Exercise 7.37 to find the minimum value in a vector instead of an array.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <vector>

template <typename T>
void PrintVector(std::vector<T> v) {
  for (int i = 0; i < v.size(); i++) {
    std::cout << v[i] << ' ';
  }
  std::cout << std::endl;
}

template <typename T>
T GetMinRecursive(std::vector<T> v) {
  if (v.size() <= 1) return v[0];
  T first = v[0];
  v.erase(v.begin());
  T min = GetMinRecursive(v);
  return (first > min) ? min : first;
}

int main() {
  std::vector<int> vect {14, 98, 23, 27, 72, 28, 12, 42, 23, 82};

  std::cout << "vector: ";
  PrintVector(vect);
  std::cout << "Min: " << GetMinRecursive(vect);
  std::cout << std::endl;

  return 0;
}
