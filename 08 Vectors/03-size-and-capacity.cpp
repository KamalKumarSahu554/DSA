/*
In a **vector**, **size** refers to the number of elements currently stored, while **capacity** is the total amount of memory allocated, which determines how many elements it can hold before needing to resize.

- **Size**: The current count of elements.
- **Capacity**: The maximum number of elements the vector can hold before resizing.

When the size exceeds the capacity, the vector automatically allocates more memory (usually doubling the capacity), which may involve copying elements to the new storage.
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> vec;

  vec.push_back(0);
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(4);

  cout << "Size = " << vec.size() << "\n";         // 5
  cout << "Capacity = " << vec.capacity() << "\n"; // 8
  return 0;
}