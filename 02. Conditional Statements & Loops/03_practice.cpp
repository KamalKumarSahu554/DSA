#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter anumber : ";
  cin >> n;
  // 1. Sum of all number s from 1 to N which divisible by 3;
  int sum = 0;
  for (int i = 1; i <= n; i++)
  {
    if (i % 3 == 0)
    {
      sum += i;
    }
  }
  // cout << sum;
  // 2. Print factorial of a number N.
  int facto = 1;
  for (int i = 1; i <= n; i++)
  {
    facto *= i;
  }
  cout << facto;
  return 0;
}