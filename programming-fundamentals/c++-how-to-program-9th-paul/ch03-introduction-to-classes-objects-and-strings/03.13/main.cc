#include <iostream>

#include "invoice.h"

int main() {
  Invoice invoice_1("10101", "Terminal blocks", 10, 20);
  Invoice invoice_2("20136", "Screws", -10, 20);

  std::cout << "Part number: " << invoice_1.part_number() << std::endl;
  std::cout << "Description: " << invoice_1.part_description() << std::endl;
  std::cout << "Item number: " << invoice_1.purchased_item_num() << std::endl;
  std::cout << "Item price: " << invoice_1.item_price() << std::endl;
  std::cout << "Invoice: " << invoice_1.GetInvoiceAmount() << std::endl;

  std::cout << std::endl;
  std::cout << "Part number: " << invoice_2.part_number() << std::endl;
  std::cout << "Description: " << invoice_2.part_description() << std::endl;
  std::cout << "Item number: " << invoice_2.purchased_item_num() << std::endl;
  std::cout << "Item price: " << invoice_2.item_price() << std::endl;
  std::cout << "Invoice: " << invoice_2.GetInvoiceAmount() << std::endl;
}
