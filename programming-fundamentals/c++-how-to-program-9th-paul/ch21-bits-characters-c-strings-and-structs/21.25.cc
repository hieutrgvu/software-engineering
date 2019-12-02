// 21.22 (Strings Ending with ED) Write a program that reads a series of
// strings and prints only those strings that end with the letters “ED”.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <string>

int main() {
  char s[100][100];
  int num_lines = 0;
  char * search_ptr;

  std::cout << "Input several lines of text (2 enter for exit):\n";
  for (num_lines = 0; num_lines < 100; num_lines++) {
    std::cin.getline(s[num_lines], 100);
    if (s[num_lines][0] == '\0') break;
  }

  std::cout << "The string(s) ending with \"ED\":\n";
  for (int i = 0; i < num_lines; i++) {
    search_ptr = strstr(s[i], "ED");
    if ((search_ptr != nullptr) && (search_ptr[2] == '\0')) {
      std::cout << s[i] << std::endl;
    }
  }

  return 0;
}
