/*

# Variables
A variable in programming is a place to store data, like a container, that can hold different values.
Ex- int(Data Type) age(Variable) = 18(Value)

# Data Types (Primitive)
int - 4 bytes
char - 1 byte
float - 4 bytes
bool -  1 byte
double - 8 bytes

# Type Casting
1. converssion(implisit) [Larger data type -> Smaller data type]
2. casting(explicit) [Smaller data type -> Larger data type -> Smaller data type]

//  # Operators
1. Arithmetic (+, _, *, /, %)
2. Relational (<, <=, >, >=, ==, !=)
3. Logical (||, &&, !)
4. Unary Operators (++, --)

*/

#include <iostream>
using namespace std;

int main()
{
  // # Data Types
  int age = 18;
  char grade = 'A';
  float PI = 3.14f;
  bool isCorreact = true;
  double price = 899;

  // # Type Casting
  int newPrice = (int)price;

  // # Input
  int value;
  // cin >> value;

  // # Operators
  int a = 10, b = 3;
  
  // 1. Arithmetic
  int sum = a + b;
  int difference = a - b;
  int product = a * b;
  int division = a / b;
  int modulo = a % b;

  // 2. Relational
  int less = a < b;
  int lessEqual = a <= b;
  int greater = a > b;
  int greaterEqual = a >= b;
  int equa = a == b;
  int notEqual = a != b;

  // 3. Logical
  int logicalOR = (a > b) || (a < b);  // true(1)
  int logicalAND = (a > b) || (a < b); // false(0)
  int logicalNOT = !(a > b);           // false(0)

  // 4. Unary Operator

  return 0;
}
