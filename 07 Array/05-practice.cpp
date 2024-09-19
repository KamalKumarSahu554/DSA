/*
# Re-visit this Array to solve other problems#
*/

#include <iostream>
using namespace std;

// Sum and Product of an array
void sumAndProduct(int arr[], int size)
{
  int sum = 0, product = 1;
  for (int i = 0; i < size; i++)
  {
    sum += arr[i];
    product *= arr[i];
  }
  cout << "sum = " << sum << "\n";
  cout << "product = " << product << "\n";
}

// swap the max & min number of an array
void swapminAndMax(int arr[], int size)
{
  int minIndex = 0, maxIndex = 0;

  for (int i = 1; i < size; i++)
  {
    if (arr[i] < arr[minIndex])
    {
      minIndex = i;
    }
    if (arr[i] > arr[maxIndex])
    {
      maxIndex = i;
    }
  }
  swap(arr[minIndex], arr[maxIndex]);

  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << "  ";
  }
}

// WAF to print all the uniqe values an array.
// WAF to print intersection of 2 arrays.

int main()
{
  int size = 5, arr[] = {6, -4, 3, 4, 15};

  // sumAndProduct(arr, size);
  // swapminAndMax(arr, size);

  return 0;
}