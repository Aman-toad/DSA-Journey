#include <iostream>
#include <math.h>
using namespace std;

// binary to decimal system

int main()
{
  int n = 1101, sum = 0, power = 0;

  while (n > 0)
  {
    int digit = (n % 10) * pow(2,power);
    sum += digit ;
    n /= 10;
    power ++;
  }

  cout<<sum;
}