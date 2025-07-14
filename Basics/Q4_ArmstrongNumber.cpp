#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int n, temp, cubeDigits = 0;
  cout << "Enter a num: ";
  cin >> n;
  temp = n;

  while (n != 0)
  {
    cubeDigits += pow((n % 10), 3);
    n /= 10;
  }

  cubeDigits == temp ? cout << "YES" : cout << "NO";
}