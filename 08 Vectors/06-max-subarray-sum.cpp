#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int size = 5;
  int arr[size] = {1, -2, 3, 4, -5};

  // # Brute force aproach = O(n^2)
  int maxSum = INT16_MIN;
  for (int start = 0; start < size; start++)
  {
    int currSum = 0;
    for (int end = start; end < size; end++)
    {
      currSum += arr[end];
      maxSum = max(currSum, maxSum);
    }
  }
  cout << "max subArray sum = " << maxSum << "\n";

  // # Kadanse's Algorithim
  int currSum = 0;
  // int maxSum = INT16_MIN;
  for (int i = 0; i < size; i++)
  {
    currSum += arr[i];
    maxSum = max(currSum, maxSum);
    if (currSum < 0)
      currSum = 0;
  }
  cout << "max subArray sum = " << maxSum << "\n";
  return 0;
}