#include <iostream>
using namespace std;

int main()
{
  int n;
  // cout << "Enter a number : ";
  // cin >> n;

  // # While loops
  int i = 1;
  while (i <= n)
  {
    // cout << i << " ";
    i++;
  }

  // # For loops
  for (int i = 1; i <= n; i++)
  {
    // cout << i << " ";
  }

  int oddSum = 1;
  for (int i = 1; i <= n; i++)
  {
    if (i % 2 != 0)
    {
      oddSum += i;
    }
  }
  // cout << oddSum;

  // # Do-While loops
  int j = 1;
  do
  {
    // cout << j << " ";
    j++;

  } while (j <= n);

  // Prime Number
  bool isPrime = true;
  for (int i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      isPrime = false;
      break;
    }
  }
  if (isPrime == true)
  {
    // cout << "Prime Number";
  }
  else
  {
    // cout << "Non prime number";
  }

  // # Nasted Loop 
  int x = 3, y = 2;
  for (int i = 0; i < x; i++)
  {
    for (int j = 0; j < y; j++)
    {
      cout << "* ";
    }
    cout << "\n";
  }

  return 0;
}