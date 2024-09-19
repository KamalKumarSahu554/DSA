#include <iostream>
using namespace std;
void changeArr(int arr[], int size)
{
  cout << "in changeArr function\n";
  for (int i = 0; i < size; i++)
  {
    arr[i] *= 2;
  }
}

int main()
{
  int arr[] = {1, 2, 3};

  changeArr(arr, 3);

  cout << "in main function \n";

  for (int i = 0; i < 3; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}