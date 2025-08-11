#include <iostream>
#include <string>

using namespace std;

string revString(const string &str){
  string rev;
  for (int i = str.length()-1; i >= 0; i--)
  {
    rev += str[i];
  }
  return rev;
}

int main(){
  string s;
  cout<<"Enter a string: ";
  getline(cin,s);

  cout<<"Reversed: "<<revString(s)<<endl;
  return 0;
}