// 21.21 (Searching for Characters) Write a program that inputs several lines
// of text and a search character and uses function strchr to determine the
// total number of occurrences of the character in the lines of text.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <string>

int main() {
  char s[100][100];
  char search_c;
  char * search_ptr;
  int count = 0;
  int num_lines = 0;

  std::cout << "Input several lines of text (2 enter for exit):\n";
  for (num_lines = 0; num_lines < 100; num_lines++) {
    std::cin.getline(s[num_lines], 100);
    if (s[num_lines][0] == '\0') break;
  }

  std::cout << "Input a search character: ";
  std::cin >> search_c;

  for (int i = 0; i < num_lines; i++) {
    search_ptr = s[i] - 1;
    while (true) {
      search_ptr = strchr(search_ptr + 1, search_c);
      if (search_ptr == nullptr) break;
      count++;
    }
  }

  std::cout << "The number of occurrences: " << count << std::endl;

  return 0;
}
