#include <iostream>
using namespace std;

int main()
{
  int a = 10, b = 20;

  a = a + b;
  b = a - b;
  a = a - b;

  cout << "a = " << a << ", b = " << b << endl;
  return 0;
}

// same using xor operation
int main()
{
  int a = 5, b = 10;

  a = a ^ b;
  b = a ^ b;
  a = a ^ b;

  cout << "a = " << a << ", b = " << b << endl;
  return 0;
}