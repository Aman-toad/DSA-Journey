#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> vec = {0, 2, 1, 2, 0, 1, 0, 2};
  int n = size(vec);

  int low = 0, mid = 0, high = n - 1;

  while (mid <= high)
  {
    if (vec[mid] == 0)
    {
      swap(vec[mid], vec[low]);
      low++, mid++;
    }
    else if (vec[mid] == 1)
    {
      mid++;
    }

    else
    {
      swap(vec[mid], vec[high]);
      high--;
    }
  }

  cout << "Array: [";
  for (int i : vec)
  {
    cout << i << " ";
  }
  cout << "]" << endl;

  return 0;
}