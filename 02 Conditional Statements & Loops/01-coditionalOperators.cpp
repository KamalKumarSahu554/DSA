#include <iostream>
using namespace std;

int main()
{
  // # Conditional Statements
  // Age
  /*
  int age;
  cout << "Enter age  : ";
  cin >> age;
  if (age >= 18)
  {
    cout << "Can Vote.";
  }
  else
  {
    cout << "Can not vote.";
  }
  */

  // Odd & Even
  /*
  int n;
  cout << "Enter a number : ";
  cin >> n;
  if (n % 2 == 0)
  {
    cout << "Even";
  }
  else
  {
    cout << "Odd";
  }
  */

  // Grade
  /*
  int mark;
  cout << "Enter the mark between 0 to 100: ";
  cin >> mark;
  if (mark >= 90)
  {
    cout << "Grade A";
  }
  else if (mark >= 80 && mark < 90)
  {
    cout << "Grade B";
  }
  else
  {
    cout << "Grade C";
  }
  */

  // Capital & small character
  /*
  char chr;
  cout << "Enter a Character : ";
  cin >> chr;
  if (chr >= 65 && chr <= 90)
  {
    cout << "Capital";
  }
  else if (chr >= 97 && chr <= 122)
  {
    cout << "small";
  }
  else
  {
    cout << "Wrong input";
  }
  */

  // # Ternary Statement
  int n;
  cout << "Enter number : ";
  cin >> n;
  (n >= 0) ? cout << "positive " : cout << "Negetive";

  return 0;
}
