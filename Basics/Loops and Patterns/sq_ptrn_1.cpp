#include <iostream>
using namespace std;

/*
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
*/
int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;

  // numbers
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }

  // stars
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }

  // characters
  for (int i = 1; i <= n; i++)
  {
    char ch = 'A';
    for (int j = 1; j <= n; j++)
    {
      cout << ch << " ";
      ch++;
    }
    cout << endl;
  }
};

