/*
In Data Structures and Algorithms (DSA), a **vector** is a dynamic array that automatically resizes as elements are added or removed. Unlike static arrays, vectors can grow or shrink based on the number of elements.

Key points:
- **Dynamic resizing**: Expands or contracts as needed.
- **Efficient access**: Elements can be accessed in constant time (O(1)) using an index.
- **Insertion/removal**: Adding or removing elements at the end is efficient (O(1)), but doing so in the middle can take more time (O(n)).

Vectors are useful when the size of the data is not fixed and needs to change dynamically.
*/

#include <iostream>
// need to include <vector> header file
#include <vector>
using namespace std;

int main()
{
  vector<int> vec(3, 8);
  cout << vec[1];
  return 0;
}