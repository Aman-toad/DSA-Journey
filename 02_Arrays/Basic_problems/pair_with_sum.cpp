#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
  vector<int> arr = {2, 7, 11, 15}, pairs;

  int k;
  cout << "Enter a target sum for pair numbers: ";
  cin >> k;

  bool found = false;

  for (int i = 0; i < arr.size(); i++)
  {
    for (int j = 0; j < arr.size(); j++)
    {
      if (arr[i] + arr[j] == k)
      {
        cout << "Pair found: (" << arr[i] << ", " << arr[j] << ")" << endl;
        found = true;
      }
    }
  }

  if (!found)
    cout << "No pair found with sum" << k << endl;
}