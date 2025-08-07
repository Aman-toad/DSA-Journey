#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> vec = {1, 2, 3, 4, 5};

  int n = size(vec);
  int left = 0, right = n - 1;
  while (left < right)
  {
    int temp = vec[left];
    vec[left] = vec[right];
    vec[right] = temp;
    left++;
    right--;
  }

  cout << "Reversed Array: [";
  for (int i : vec)
  {
    cout << i << " ";
  }
  cout << "]" << endl;

  return 0;
}