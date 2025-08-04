#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n, e, k;
  cout << "Enter no of elements in array: ";
  cin >> n;
  cout << "Enter element of the array: ";
  vector<int> vec(n);
  for (int i = 0; i < n; i++)
    cin >> vec[i];
  cout << "Array is: [";
  for (int x : vec)
    cout << x << " ";
  cout << "]" << endl;

  cout << "What element you want to insert: ";
  cin >> e;
  cout << "At what index you want to inset element: ";
  cin >> k;
  vec.insert(vec.begin() + k, e);

  cout << "New Array is: [";
  for (int x : vec)
    cout << x << " ";
  cout << "]" << endl;

  return 0;
}