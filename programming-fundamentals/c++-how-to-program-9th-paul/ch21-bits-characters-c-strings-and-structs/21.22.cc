// 21.22 Searching for Characters) Write a program based on the program of
// Exercise 21.21 that inputs several lines of text and uses function strchr
// to determine the total number of occurrences of each letter of the alphabet
// in the text. Uppercase and lowercase letters should be counted together.
// Store the totals for each letter in an array, and print the values in
// tabular format after the totals have been determined.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <string>

int main() {
  char s[100][100];
  char * search_ptr;
  int count[26] = {};
  int num_lines = 0;

  std::cout << "Input several lines of text (2 enter for exit):\n";
  for (num_lines = 0; num_lines < 100; num_lines++) {
    std::cin.getline(s[num_lines], 100);
    if (s[num_lines][0] == '\0') break;
  }

  for (int i = 0; i < num_lines; i++) {
    for (char c = 97; c < 122; c++) {
      search_ptr = s[i] - 1;
      while (true) {
        search_ptr = strchr(search_ptr + 1, tolower(c));
        if (search_ptr == nullptr) break;
        count[c - 97]++;
      }

      search_ptr = s[i] - 1;
      while (true) {
        search_ptr = strchr(search_ptr + 1, toupper(c));
        if (search_ptr == nullptr) break;
        count[c - 97]++;
      }
    }
  }

  std::cout << "The number of occurrences:\n";
  for (char c = 97; c < 122; c++) {
    std::cout << c << " and " << (char)toupper(c) << ": "
      << count[c - 97] << std::endl;
  }

  return 0;
}
