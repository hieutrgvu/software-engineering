// Assume that a system has a 32-bit virtual address with a 4-KB page size.
// Write a C program that is passed a virtual address (in decimal) on the
// command line and have it output the page number and offset for the given
// address. As an example, your program would run as follows:
// ./addresses 19986
//
// Your program would output:
// The address 19986 contains:
// page number = 4
// offset = 3602
//
// Writing this program will require using the appropriate data type to store
// 32 bits. We encourage you to use unsigned data types as well.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc > 1) {
    unsigned int virtual_addr = strtol(argv[1], NULL, 10);
    printf("The address %d contains:\n", virtual_addr);
    printf("page number = %d\n", virtual_addr / 4096);
    printf("offset = %d\n", virtual_addr % 4096);
  }
  else {
    printf("Usage: ./09.08.out <decimal>\nExample: ./09.08.out 12345\n");
  }

  return 0;
}
