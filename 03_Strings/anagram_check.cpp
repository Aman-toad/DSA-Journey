#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s1, s2;
  cout << "Enter first string: ";
  getline(cin, s1);
  cout << "Enter second string: ";
  getline(cin, s2);

  bool isAnagram = false;

  if (s1.length() != s2.length())
    cout << "NOT an Anagram" << endl;

  int freq[26] = {0};

  for (char c : s1)
    freq[tolower(c) - 'a']++;

  for (char c : s2)
    freq[tolower(c) - 'a']--;

  for (int count : freq)
    if (count != 0)
      isAnagram = false;
    else
      isAnagram = true;

  if (isAnagram)
    cout << "String is Anagram" << endl;
  else
    cout << "NOT an Anagram" << endl;

  return 0;
}