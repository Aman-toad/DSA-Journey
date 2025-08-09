#include <iostream>
#include <string>

using namespace std;

bool oneEditAway(string s1, string s2)
{
  int n1 = s1.size(), n2 = s2.size();

  if (abs(n1 - n2) > 1)
    return false;

  int i = 0, j = 0;
  bool foundDiff = false;

  while (i < n1 && j < n2)
  {
    if (s1[i] == s2[j])
    {
      i++, j++;
    }
    else
    {
      if (foundDiff)
        return false;
      foundDiff = true;

      if (n1 == n2)
      {
        i++, j++;
      }
      else if (n1 > n2)
      {
        i++;
      }
      else
      {
        j++;
      }
    }
  }
  return true;
}
int main()
{
  cout << boolalpha;
  cout << oneEditAway("pale", "ple") << endl;   // true (remove 'a')
  cout << oneEditAway("pales", "pale") << endl; // true (remove 's')
  cout << oneEditAway("pale", "bale") << endl;  // true (replace 'p' with 'b')
  cout << oneEditAway("pale", "bake") << endl;  // false (2 edits)
}