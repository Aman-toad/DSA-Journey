#include <iostream>
using namespace std;

// n = 4

int main()
{
  // *
  // **
  // ***
  // ****
  int n = 4;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i + 1; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }

  // numbers ke liye
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i + 1; j++)
    {
      cout << j + 1 << " ";
    }
    cout << endl;
  }

  /*
    1
    2 2
    3 3 3
    4 4 4 4
  */

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i + 1; j++)
    {
      cout << (i + 1) << " ";
    }
    cout << endl;
  }

  cout << endl;

  // character ke liye
  for (int i = 0; i < n; i++)
  {
    char ch = 'A' + i;
    for (int j = 0; j < i + 1; j++)
    {
      cout << ch << " ";
    }
    cout << endl;
  }

  cout<<endl;

  // Floyd's Triangle Pattern
  // 1
  // 2 3
  // 4 5 6
  // 7 8 9 10

  int num = 1;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j > 0; j--)
    {
      cout << num << " ";
      num++;
    }
    cout << endl;
  }
}