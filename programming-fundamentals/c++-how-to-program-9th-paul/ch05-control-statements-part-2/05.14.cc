// 5.14 (Calculating Total Sales) A mail order house sells five different
// products whose retail prices are: product 1 — $2.98, product 2 — $4.50,
// product 3 — $9.98, product 4 — $4.49 and product 5 — $6.87. Write a program
// that reads a series of pairs of numbers as follows:
//    a) product number
//    b) quantity sold
// Your program should use a switch statement to determine the retail price for
// each product. Your program should calculate and display the total retail
// value of all products sold. Use a sentinel-controlled loop to determine when
// the program should stop looping and display the final results.

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>
#include <iomanip>

int main() {
  int product_number;
  int quantity_sold;
  double total_retail_1 = 0;
  double total_retail_2 = 0;
  double total_retail_3 = 0;
  double total_retail_4 = 0;

  std::cout << "Input product number and quantity sold (e.g. 2 10)"
    << " or -1 to quit: ";
  std::cin >> product_number;

  while (product_number >= 0) {
    std::cin >> quantity_sold;

    switch (product_number) {
      case 1:
        total_retail_1 += quantity_sold * 2.98;
        break;
      case 2:
        total_retail_2 += quantity_sold * 4.50;
        break;
      case 3:
        total_retail_3 += quantity_sold * 9.98;
        break;
      case 4:
        total_retail_4 += quantity_sold * 4.49;
        break;
      default:
        std::cout << "Invalid product number" << std::endl;
        break;
    }

    std::cout << "Input product number and quantity sold (e.g. 2 10)"
      << "or EOF to quit: ";
    std::cin >> product_number;
  }

  std::cout << std::setw(15) << "Product number"
    << std::setw(20) << "Total retail value" << std::endl;
  std::cout << std::setw(15) << 1
    << std::setw(20) << total_retail_1 << std::endl;
  std::cout << std::setw(15) << 2
    << std::setw(20) << total_retail_2 << std::endl;
  std::cout << std::setw(15) << 3
    << std::setw(20) << total_retail_3 << std::endl;
  std::cout << std::setw(15) << 4
    << std::setw(20) << total_retail_4 << std::endl;
  return 0;
}
