#include <iostream>
using namespace std;

int main()
{
  int a = 5; // 0101 in binary
  int b = 3; // 0011 in binary

  cout << "Bitwise AND: " << (a & b) << endl;   // 0001 -> 1
  cout << "Bitwise OR: " << (a | b) << endl;    // 0111 -> 7
  cout << "Bitwise XOR: " << (a ^ b) << endl;   // 0110 -> 6
  cout << "Bitwise NOT of a: " << (~a) << endl; // 1010 -> -6 in two's complement
  cout << "Bitwise NOT of b: " << (~b) << endl; // 1100 -> -4 in two's complement

  // left and right shifts
  int n = 4; //0100 in binary
  cout << "left shift: " << (n << 1) << endl; // 1000 -> 8
  cout << "right shift: " << (n >> 1) << endl; // 0010 -> 2

  return 0;
}

