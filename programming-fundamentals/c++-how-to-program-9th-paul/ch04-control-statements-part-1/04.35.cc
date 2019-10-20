// 4.35 (Enforcing Privacy with Cryptography) The explosive growth of Internet
// communications and data storage on Internet-connected computers has greatly
// increased privacy concerns. The field of cryptography is concerned with
// coding data to make it difficult (and hopefully—with the most advanced
// schemes—impossible) for unauthorized users to read. In this exercise you'll
// investigate a simple scheme for encrypting and decrypting data. A company
// that wants to send data over the Internet has asked you to write a program
// that will encrypt it so that it may be transmitted more securely. All the
// data is transmitted as four-digit integers. Your application should read a
// four-digit integer entered by the user and encrypt it as follows: Replace
// each digit with the result of adding 7 to the digit and getting the remainder
// after dividing the new value by 10. Then swap the first digit with the third,
// and swap the second digit with the fourth. Then print the encrypted integer.
// Write a separate application that inputs an encrypted four-digit integer and
// decrypts it (by reversing the encryption scheme) to form the original number.
// [Optional reading project: Research "public key cryptography" in general and
// the PGP (Pretty Good Privacy) specific public key scheme. You may also want
// to investigate the RSA scheme, which is widely used in industrial-strength
// applications.]

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

#include <iostream>

int main() {
  int input;
  int output;
  int counter;
  int factor;

  std::cout << "Enter an encrypted four-digit integer: ";
  std::cin >> input;

  // Replace each digit with the result of adding 7 to the digit and getting the
  // remainder after dividing the new value by 10.
  //i = input;
  //factor = 1;
  //output = 0;
  //while (i != 0) {
  //  output += (((i % 10) + 7) % 10) * factor;
  //  factor *= 10;
  //  i /= 10;
  //}
  //std::cout << output << std::endl;

  // Replace each digit with the result of adding 7 to the digit and getting the
  // remainder after dividing the new value by 10. Then,  Swap the 1st digit
  // with the 3rd, and swap the 2nd digit with the 4th.
  factor = 1;
  output = 0;
  counter = 1;
  while (input != 0) {
    factor = ((input % 10) + 7) % 10;

    if (counter == 1) { output += 100 * factor; }
    else if (counter == 2) { output += 1000 * factor; }
    else if (counter == 3) { output += factor; }
    else if (counter == 4) { output += 10 * factor; }

    factor *= 10;
    input /= 10;
    ++counter;
  }

  std::cout << "Decrypt to: ";
  if ((output / 1000) == 0) { std::cout << "0"; }
  std::cout << output << std::endl;
}
