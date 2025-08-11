#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s;
  cout << "Enter a string: ";
  getline(cin, s);

  int freq[256] = {0};
  string result = "";

  for (char ch : s)
  {
    if (freq[(unsigned char)ch] == 0)
    {
      result += ch;
      freq[(unsigned char)ch] = 1;
    }
  }

  cout << "Without duplicates: " << result << endl;
  return 0;
}