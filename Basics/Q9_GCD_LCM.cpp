#include <iostream>
using namespace std;

int GCD(int a, int b){
  int minNum = min(a,b);

  while (a % minNum != 0 || b % minNum != 0)
  {
    minNum --;
  }
  return minNum;
}

int LCM(int a, int b){
  int maxNum = max(a, b);

  while(maxNum % a != 0 || maxNum % b != 0){
    maxNum ++;
  }
  return maxNum;
}

int main(){
  int a,b;
  cout<<"Enter Numbers: "<<endl;
  cout<<"Number 1: ";cin>>a;
  cout<<"Number 2: ";cin>>b;

  cout<<"The GCD of following numbers is: "<<GCD(a,b)<<endl;
  cout<<"The LCM of following numbers is: "<<LCM(a,b)<<endl;
}