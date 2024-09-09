#include <iostream>
using namespace std;

int main() {
  // Initilaize operand1 and operand2
 float operand1 = 50.0;
 float operand2 = 26.0;
  // Prints value of operand1 and operand2
  cout << "Values of operands are:" << endl;
  cout << "operand1 = " << operand1 << " , operand2 = " << operand2 << endl;
  // Adds operand1 and operand2; and print their result
  cout << "Addition = " << (float)(operand1 + operand2) << endl;
  // Subtracts operand1 and operand2; and print their result
  cout << "Subtraction = " << operand1 - operand2 << endl;
  // Multiplies operand1 and operand2; and print their result
  cout << "Multiplication = " << operand1 * operand2 << endl;
  // Divides operand1 and operand2; and print their result
  cout << "Division = " << operand1 / operand2 << endl;
  // Returns remainder of operand1 and operand2; and print it
  //cout << "Modulus = " << operand1 % operand2 << endl;
  return 0;
}