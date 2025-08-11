#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s,notSpace;
  cout << "Enter a string: ";
  getline(cin, s);
  
  for(char ch:s){
    if(ch != ' ') notSpace += ch;
  }

  cout << "String without spaces : " << notSpace << endl;
  return 0;
}