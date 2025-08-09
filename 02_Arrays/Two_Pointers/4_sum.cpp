#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> vec = {0, 1, 2, 3, 8, 9, 11};
  vector<vector<int>> result;
  int n = vec.size();
  int target = 19;

  sort(vec.begin(), vec.end()); // Sorting

  for (int i = 0; i < n - 3; i++)
  {
    if (i > 0 && vec[i] == vec[i - 1])
      continue;

    for (int j = i + 1; j < n - 2; j++)
    {
      if (j > i + 1 && vec[j] == vec[j - 1])
        continue;

      int left = j + 1, right = n - 1;

      while (left < right)
      {
        int sum = vec[i] + vec[j] + vec[left] + vec[right];

        if (sum == target)
        {
          result.push_back({vec[i], vec[j], vec[left], vec[right]});

          while (left < right && vec[left] == vec[left + 1])
            left++;
          while (left < right && vec[right] == vec[right - 1])
            right--;

          left++;
          right--;
        }
        else if (sum < target)
          left++;
        else
          right--;
      }
    }
  }

  for (auto quadruplet : result)
  {
    for (int num : quadruplet)
    {
      cout << num << " ";
    }
    cout << endl;
  }
}
