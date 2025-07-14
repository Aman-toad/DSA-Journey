#include <iostream>
using namespace std;

// c++ has 3 popular methods for this

// first => naive method(right shift and check)
int countSetBits1(int n){
  int count = 0;
  while (n > 0)
  {
    if (n & 1) count ++; // agar last bit 1 hai to count ++
    n = n >> 1; // number ko right shift karna    
  }
  return count;  
}

// second => Brian karnighan's algo(faster)
int countSetBits2(int n){
  int count = 0;
  while (n)
  {
    n = n & (n - 1); // last set bit hatana
    count ++;
  }
  return count;  
}

// third => using STL
#include <bitset>
int countSetBits3(int n){
  return std::bitset<32>(n).count();
}

int main(){
  int num;
  cout<<"Enter a number: ";cin>>num;

  cout<<"Total 1 Bits in number is: "<<countSetBits1(num)<<endl;
  cout<<"Total 1 Bits in number is: "<<countSetBits2(num)<<endl;
  cout<<"Total 1 Bits in number is: "<<countSetBits3(num)<<endl;
}