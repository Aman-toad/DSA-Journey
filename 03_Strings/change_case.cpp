#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s;
  cout << "Enter a string: ";
  getline(cin, s);
  string changedCase;

  for (char ch : s)
  {
    if (ch >= 'a' && ch <= 'z')
    {
      ch = toupper(ch);
      changedCase += ch;
    }
    else
    {
      ch = tolower(ch);
      changedCase += ch;
    }
  }

  cout << "Change Case String: " << changedCase << endl;
  return 0;
}