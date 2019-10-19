#ifndef INVOICE_H_
#define INVOICE_H_

#include <string>

class Invoice {
 public:
  Invoice(std::string part_number, std::string part_description,
    int purchased_item_num, int item_price);

  // Mutator
  void set_part_number(std::string part_number);
  void set_part_description(std::string part_description);
  void set_purchased_item_num(int purchased_item_num);
  void set_item_price(int item_price);

  // Accessor
  std::string part_number() const { return part_number_; }
  std::string part_description() const { return part_description_; }
  int purchased_item_num() const { return purchased_item_num_; }
  int item_price() const { return item_price_; }

  int GetInvoiceAmount();

 private:
  std::string part_number_;
  std::string part_description_;
  int purchased_item_num_;
  int item_price_;
};

#endif // INVOICE_H_
