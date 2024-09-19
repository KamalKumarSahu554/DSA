#include <iostream>
using namespace std;

// 2 pointer aproach
void reverseArr(int arr[], int size)
{
  int start = 0, end = size - 1;
  while (start < end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}
int main()
{
  // int size = 10;
  // int arr[size] = {34, 7, 87, 97, 03};
  // for (int i = size - 1; i >= 0; i--)
  // {
  //   cout << arr[i] << " ";
  // }

  int size = 7;
  int arr[] = {4, 2, 7, 8, 1, 2, 5};
  reverseArr(arr, size);

  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}