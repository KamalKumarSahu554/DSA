// // # Functions

// #include <iostream>
// using namespace std;

// // function definition
// int sum(int a, int b /* function parameter */)
// {
//   return a + b;
// }

// int main()
// {
//   // function call / invoke
//   int val = sum(10, 5 /* argument */);
//   cout << val;

//   return 0;
// }

#include <iostream>
using namespace std;

// Min of 2 nums
int minOfTwo(int a, int b)
{
  return (a > b) ? b : a;
}

// Sum of numbers 1 to N
int sumOfNums(int n)
{
  int sum = 0;
  for (int i = 1; i <= n; i++)
  {
    sum += i;
  }
  return sum;
}

// Sum of digit of a number
int sumOfDigit(int num)
{
  int digitSum = 0;

  // int lastDigit;
  // while (num > 0) // in while loop
  // {
  //   lastDigit = num % 10;
  //   num /= 10;
  //   digitSum += lastDigit;
  // }

  for (int lastDigit; num > 0; num /= 10) // in for loop
  {
    lastDigit = num % 10;
    digitSum += lastDigit;
  }
  return digitSum;
}

// Factorial of n
int factorial(int n)
{
  int facto = 1;
  for (int i = 1; i <= n; i++)
  {
    facto *= i;
  }
  return facto;
}

// nCr binomial coefficient for n & r
int binomialCoefficiant(int n, int r)
{
  if (r > n)
  {
    return 0;
  }

  int numenrator = factorial(n);
  int denominator = factorial(r) * factorial(n - r);
  int nCr = numenrator / denominator;
  return nCr;
}

// Prime number
void prime(int n)
{
  int isPrime = true;
  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      isPrime = false;
      break;
    }
  }

  if (isPrime == true)
  {
    cout << "Prime number";
  }
  else
  {
    cout << "Non-prime number";
  };
}

int main()
{
  int a = 1, b = 5, n = 27, r = 3;
  // cout << "Minimum number is : " << minOfTwo(a, b);
  // cout << "Sum of numbers : " << sumOfNums(n);
  // cout << "factorial of " << n << " is : " << factorial(n);
  // cout << "Sum of digits of " << n << " : " << sumOfDigit(n);
  // cout << "nCr binomial coefficient for " << n << " & " << r << " is : " << binomialCoefficiant(n, r);

  // cout << n << " is ";
  // prime(n);

  return 0;
}
