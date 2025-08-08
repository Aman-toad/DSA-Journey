#include <iostream>
#include <vector>

using namespace std;

// a+b+c = target
int main()
{
  vector<int> vec = {1, 2, 3, 4, 5};
  vector<vector<int>> result;
  int target = 9;

  int n = size(vec);
  for (int i = 0; i < n; i++)
  {
    if (i > 0 && vec[i] == vec[i - 1])
      continue;

    int left = i + 1;
    int right = n - 1;

    while (left < right)
    {
      int sum = vec[i] + vec[left] + vec[right];

      if (sum == target)
      {
        result.push_back({vec[i], vec[left], vec[right]});

        while (left < right && vec[left] == vec[left + 1])
          left++;
        while (left < right && vec[right] == vec[right + 1])
          right--;

        left++, right--;
      }
      else if (sum < target)
        left++;
      else
        right--;
    }
  }

  vector<vector<int>> res = result;
  for (auto triplet : res)
  {
    for (int num : triplet)
    {
      cout << num << " ";
    }
    cout << endl;
  }
}