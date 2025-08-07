#include <iostream>
#include <vector>

using namespace std;
// check if Target pair is presenet
int main()
{
  vector<int> vec = {1, 2, 3, 4, 6, 8};
  int n = size(vec), target = 10, left = 0, right = n - 1;
  bool isPresent = false;

  while (left < right)
  {
    int sum = vec[left] + vec[right];
    if (sum == target)
    {
      isPresent = true;
      break;
    }
    else if (sum < target)
    {
      left++;
    }
    else
    {
      right--;
    }
  }

  if (isPresent)
  {
    cout << "YES the Array has Target Sum pair!!";
  }
  else
  {
    cout << "NO the Array does not have Target Sum pair!!";
  }
}