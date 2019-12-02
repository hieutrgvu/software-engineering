// 21.24 (Strings Beginning with b) Write a program that reads a series of
// strings and prints only those strings beginning with the letter “b”.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <string>

int main() {
  char s[100][100];
  int num_lines = 0;

  std::cout << "Input several lines of text (2 enter for exit):\n";
  for (num_lines = 0; num_lines < 100; num_lines++) {
    std::cin.getline(s[num_lines], 100);
    if (s[num_lines][0] == '\0') break;
  }

  std::cout << "The string(s) beginning with \'b\':\n";
  for (int i = 0; i < num_lines; i++) {
    if (strchr(s[i], 'b') == s[i]) std::cout << s[i] << std::endl;
  }

  return 0;
}
