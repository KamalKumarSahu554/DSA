#include <iostream>
using namespace std;

// Reverse an intiger
int reverseInt(int num)
{
  int reversedNumber = 0;

  while (num != 0)
  {
    int remainder = num % 10;
    reversedNumber = (reversedNumber * 10) + remainder;
    num /= 10;
  }
  return reversedNumber;
}

bool powerOfTwo(int num)
{
  while (num > 1)
  {
    if (num <= 1)
      return false;

    if (num % 2 != 0)
      return false;

    num /= 2;
  }
  return true;
}

int main()
{
  // cout << reverseInt(58340) << "   ";

  cout << powerOfTwo(16);

  return 0;
}