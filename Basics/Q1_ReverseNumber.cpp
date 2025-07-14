#include <iostream>
using namespace std;

// reverse 1234

int main()
{
  int n, rev = 0;
  cout << "Enter a number: ";
  cin >> n;
  while (n > 0)
  {
    rev = rev * 10 + n % 10;
    n /= 10;
  }
  cout << "Reversed Number: " << rev << endl;
}