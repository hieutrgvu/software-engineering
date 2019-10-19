#include "invoice.h"

// Constructor
Invoice::Invoice(std::string part_number, std::string part_description,
  int purchased_item_num, int item_price) {
  set_part_number(part_number);
  set_part_description(part_description);
  set_purchased_item_num(purchased_item_num);
  set_item_price(item_price);
}

// Mutators
void Invoice::set_part_number(std::string part_number) {
  part_number_ = part_number;
}

void Invoice::set_part_description(std::string part_description) {
  part_description_ = part_description;
}

void Invoice::set_purchased_item_num(int purchased_item_num) {
  purchased_item_num_ = purchased_item_num;
}

void Invoice::set_item_price(int item_price) {
  item_price_ = item_price;
}

// Calculate invoice if both item number and item price is not negative
int Invoice::GetInvoiceAmount() {
  if ((purchased_item_num() > 0) && (item_price() > 0)) {
    return purchased_item_num() * item_price();
  }
  else {
    return 0;
  }
}
