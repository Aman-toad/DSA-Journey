#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  vector<int> vec(6), even, odd;
  cout << "Enter element of the array: ";
  for (int i = 0; i < 6; i++)
    cin >> vec[i];

  sort(vec.begin(), vec.end());
  cout << "Sorted Array is: [";
  for (int x : vec)
    cout << x << " ";
  cout << "]" << endl;

  for (int x : vec)
  {
    if (x % 2 == 0)
    {
      even.push_back(x);
    }
    else
    {
      odd.push_back(x);
    }
  }

  cout << endl;

  cout << "even: [";
  for (int x : even)
    cout << x << " ";
  cout << "]" << endl;

  cout << "odd: [";
  for (int x : odd)
    cout << x << " ";
  cout << "]" << endl;
}