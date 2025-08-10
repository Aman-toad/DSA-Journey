#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  vector<int> v = {1, 2, 2, 3, 3, 3, 4, 4, 4};

  sort(v.begin(), v.end());

  cout<<"Duplicates: ";
  for (int i = 0; i < v.size(); i++)
  {
    if(v[i] == v[i-1]){
      if(i == 1  || v[i] != v[i-2]){
        cout<<v[i]<<" ";
      }
    }
  }
  cout<<"\n";
}
