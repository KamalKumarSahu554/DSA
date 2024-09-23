#include <iostream>
#include <vector>
using namespace std;

// Linear Search
void linearSearch(vector<int> vec, int size)
{
  for (int i = 0; i < size; i++)
  {
    if (vec[i] == 7)
    {
      cout << i << endl;
    }
  }
}

// Reverce a vector
void reverseVector(vector<int> &vec, int size)
{
  int start = 0, end = size - 1;
  while (start < end)
  {
    swap(vec[start], vec[end]);
    start++;
    end--;
  }
}

int main()
{
  vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = vec.size();

  linearSearch(vec, size);
  reverseVector(vec, size);

  for (int i = 0; i < size; i++)
  {
    cout << vec[i] << " ";
  }

  return 0;
}