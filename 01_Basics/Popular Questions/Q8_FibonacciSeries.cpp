#include <iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter a num: ";
  cin>>n;
  int arr[n] = {0,1};

  
  for (int i = 2; i < n + 1; i++)
  {
    arr[i] = arr[i-1] + arr[i-2];
  }

  cout<<"[";
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<", ";
  }
  cout<<"]";
  
}