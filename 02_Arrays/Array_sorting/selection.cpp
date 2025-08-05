#include <iostream>
using namespace std;

int main(){
  int arr[] = {5,10,15,20};
  int temp = arr[0];
  arr[0] = arr[2];
  arr[2] = temp;

  for (int i = 0; i < 4; i++)
  {
    cout<< arr[i]<<" ";
  }
  
}