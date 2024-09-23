#include <iostream>
using namespace std;

int main()
{
  int size = 5;
  int arr[size] = {1, 2, 3, 4, 5};

  for (int start = 0; start < size; start++)
  {
    for (int end = start; end < size; end++)
    {
      for (int i = start; i <= end; i++)
      {
        cout << arr[i];
      }
      cout << " ";
    }
    cout << endl;
  }

  return 0;
}