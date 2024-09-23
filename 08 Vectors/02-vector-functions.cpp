#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  // # size
  cout << "Size = " << vec.size() << "\n"; // 9

  // # push_back
  vec.push_back(10); // add 10 at last index
  for (int val : vec)
  {
    cout << val << " "; // 1 2 3 4 5 6 7 8 9 10
  }
  cout << "\n";

  // # pop_back
  vec.pop_back(); // delete last index
  for (int val : vec)
  {
    cout << val << " "; // 1 2 3 4 5 6 7 8 9
  }
  cout << "\n";

  // # front
  cout << vec.front() << "\n"; // 1

  // # back
  cout << vec.back() << "\n"; // 9

  // at
  cout << vec.at(2) << "\n"; // 3

  return 0;
}