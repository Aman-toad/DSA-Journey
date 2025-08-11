#include <iostream>
#include <string>

using namespace std;

void checkPalindrome(const string &str)
{
  string rev;

  for (int i = str.length() - 1; i >= 0; i--)
  {
    rev += str[i];
  }

  if (str == rev)
  {
    cout << str << " is a PALINDROME string" << endl;
  }
  else
  {
    cout << str << " is NOT a PALINDROME string" << endl;
  }
}

int main()
{
  string s;
  cout << "Enter a string: ";
  getline(cin, s);

  checkPalindrome(s);
  return 0;
}