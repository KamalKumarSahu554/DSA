#include <iostream>
using namespace std;

int binToDec(int binNum)
{
  int remainder, num, power = 1, ans = 0;
  while (binNum > 0)
  {
    remainder = binNum % 10;
    ans += remainder * power;
    binNum /= 10;
    power *= 2;
  }
  return ans;
}
int main()
{
  int binaryNum = 110010;
  cout << binToDec(binaryNum);
}