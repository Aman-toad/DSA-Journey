#include <iostream>
using namespace std;

// Linear Search

int main(){
  int arr[4] = {1,5,2,7};
  int target = 2;
  
  for (int i = 0; i < 4; i++)
  {
    if (arr[i] == target)
    {
      cout<<"target found at Index: "<<i<<endl;
    }    
  }  
}