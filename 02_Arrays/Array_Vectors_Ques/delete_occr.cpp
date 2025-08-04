#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int n;
  // i am adding 6 elements for testing
  vector<int> vec(6);
  cout << "Enter element of the array: ";
  for (int i = 0; i < 6; i++)
    cin >> vec[i];

  cout << "What elements you want to remove: ";
  cin >> n;

  vec.erase(remove(vec.begin(), vec.end(), n), vec.end());

  cout<<endl;

  cout << "Vector after removing: [";
  for (int x : vec)
    cout << x << " ";
  cout << "]" << endl;

  return 0;
}