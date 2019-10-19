#ifndef ACCOUNT_H_
#define ACCOUNT_H_

class Account {
 public:
  Account(int balance);
  int balance() const { return balance_; }
  void Credit(int amount);
  void Debit(int amount);

 private:
  int balance_;
};

#endif // ACCOUNT_H_
