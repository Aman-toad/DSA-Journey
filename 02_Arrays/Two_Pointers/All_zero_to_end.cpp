#include <iostream>
#include <vector>

using namespace std;
int main()
{
  vector<int> vec = {0, 1, 0, 3, 12};
  int n = size(vec);
  int j = 0;
  for (int i = 0; i < n; i++)
  {
    if (vec[i] != 0)
    {
      vec[j] = vec[i];
      j++;
    }
  }

  while (j < n)
  {
    vec[j] = 0;
    j++;
  }

  cout << "Array after moving zeroes to the end: [";
  for (int i = 0; i < n; i++)
  {
    cout << vec[i];
    if (i < n - 1)
      cout << ", ";
  }
  cout << "]" << endl;

  return 0;
}