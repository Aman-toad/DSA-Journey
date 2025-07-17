#include <iostream>
using namespace std;

// decimal to binary system

// logic
// take decimal number(input)
// divide by 2 note the remainder
//  quotient / 2
//  do while q = 0
// at last reverse the remainder and bring together

// string version
void decTobin()
{
  int n = 13, rem;
  int num = n;
  string bin = "";

  while (n > 0)
  {
    rem = n % 2;
    bin = to_string(rem) + bin;
    n /= 2;
  }

  cout << num << " in binary system is: " << bin << endl;
}

// integer version
void dec_to_bin()
{
  int n = 13, ans = 0, place = 1;
  int num = n;

  while (n > 0)
  {
    int rem = n % 2;
    ans = rem * place + ans;
    place *= 10;
    n /= 2;
  }

  cout << num << " in binary system is: " << ans << endl;
}

int main()
{
  decTobin(); // string --v
  dec_to_bin();// int --v
}