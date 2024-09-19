#include <iostream>
using namespace std;

int main()
{
  int a = 10, b = 2;

  // # Bitwise AND (&)
  cout << "Bitwise AND: " << (a & b) << "\n";
  // # Bitwise OR (|)
  cout << "Bitwise OR: " << (a | b) << "\n";

  // # Bitwise EX-OR (^)
  cout << "Bitwise EX-OR: " << (a ^ b) << "\n";

  // # Left Shift (<<)
  cout << "Left Shift: " << (a << b) << "\n"; // (a * 2^b)

  // # Right Shift (>>)
  cout << "Right Shift: " << (a >> b) << "\n"; // (a / 2*b)

  return 0;
}
