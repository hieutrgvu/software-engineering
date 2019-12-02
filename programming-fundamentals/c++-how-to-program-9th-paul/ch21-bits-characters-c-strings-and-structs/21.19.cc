// 21.19 (Searching for Substrings) Write a program that inputs a line of text
// and a search string from the keyboard. Using function strstr, locate the
// first occurrence of the search string in the line of text, and assign the
// location to variable searchPtr of type char *. If the search string is
// found, print the remainder of the line of text beginning with the search
// string. Then use strstr again to locate the next occurrence of the search
// string in the line of text. If a second occurrence is found, print the
// remainder of the line of text beginning with the second occurrence. [Hint:
// The second call to strstr should contain the expression searchPtr + 1 as
// its first argument.]

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <string>

int main() {
  char s[100];
  char search_s[100];
  char * search_ptr = s - 1;

  std::cout << "Input a string: ";
  std::cin.getline(s, 100);
  std::cout << "Input a search string: ";
  std::cin.getline(search_s, 100);

  while (true) {
    search_ptr = strstr(search_ptr + 1, search_s);
    if (search_ptr == nullptr) break;
    std::cout << search_ptr << std::endl;
  }

  return 0;
}
