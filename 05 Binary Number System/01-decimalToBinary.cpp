#include <iostream>
using namespace std;

int decToBin(int decNum)
{
  int remainder, power = 1, ans = 0;

  while (decNum > 0)
  {
    remainder = decNum % 2;
    decNum /= 2;
    ans += (remainder * power);
    power *= 10;
  }
  return ans;
}
int main()
{
  // int decimalNum = 6;
  // cout << decToBin(decimalNum);

  for (int i = 1; i <= 15; i++)
    cout << decToBin(i) << "\n";

  return 0;
}