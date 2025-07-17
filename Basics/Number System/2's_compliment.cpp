#include <iostream>

using namespace std;

int main()
{
  string bin = "00010110";
  int n = bin.length();
  for (int i = n - 1; i >= 0; i--)
  {
    if (bin[i] == '0')
      bin[i] = '1';
    else
      bin[i] = '0';
  }

  if (bin[0] == '0')
  {

  } // leave it
  else
  {
    bin = "1" + bin;
  }
  cout << bin;
}