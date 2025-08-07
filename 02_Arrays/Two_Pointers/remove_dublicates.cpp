#include <iostream>
#include <vector>

using namespace std;
int main()
{
  vector<int> vec = {1, 1, 1, 2, 3, 3, 4, 4};
  int n = size(vec), slow = 0, fast = 1;
  while (fast < n)
  {
    if (vec[fast] != vec[slow])
    {
      slow++;
      vec[slow] = vec[fast];
    }
    fast++;
  }

  cout << "After removing duplicates: [";
  for (int i = 0; i <= slow; i++)
  {
    cout << vec[i];
    if (i < slow)
      cout << ", ";
  }
  cout << "]" << endl;

  cout << "New length: " << slow + 1 << endl;

  return 0;
}