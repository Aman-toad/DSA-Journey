#include <iostream>
using namespace std;

int main()
{
  int n, originalNumber, rev = 0;
  cout << "Enter a number: ";
  cin >> n;
  originalNumber = n;
  while (n > 0)
  {
    rev = rev * 10 + n % 10;
    n /= 10;
  }

  originalNumber == rev ? cout << "YES" : cout << "NO";
}