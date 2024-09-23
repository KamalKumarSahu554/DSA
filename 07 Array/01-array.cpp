#include <iostream>
using namespace std;

int main()
{
  // // Index (input & output)
  // int size = 5;
  // int mark[size];
  // for (int i = 0; i < size; i++)
  // {
  //   cout << "Input the mark for index " << i << " : ";
  //   cin >> mark[i];
  // }
  // for (int i = 0; i < size; i++)
  // {
  //   cout << "Output of the mark for index " << i << " : " << mark[i] << endl;
  // }

  int size = 10, arr[size] = {18, 145, 78, 838, 94, -16, 20, 27, -25, 778};
  int idx;
  // Smalest in the array
  int smallest = INT16_MAX;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] < smallest)
    {
      smallest = arr[i];
      idx = i;
    }
    // smallest = min(arr[i], smallest); // by min function
  }
  cout << "Smallest of the array is : " << smallest << endl;
  cout << "index : " << idx << endl;

  // Largest in the array
  int largest = INT16_MIN;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > largest)
    {
      largest = arr[i];
      idx = i;
    }
    // largest = max(arr[i], largest); // by max function
  }
  cout << "Largest of the array is : " << largest << endl;
  cout << "index : " << idx << endl;

  return 0;
}