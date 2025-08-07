#include <iostream>
#include <vector>

using namespace std;
// check if array is palindrome
int main()
{
  vector<int> vec = {4, 1, 1, 3, 3, 2, 1, 4};
  bool isPalindrome = true;
  int n = size(vec);
  int left = 0, right = n - 1;
  while (left < right)
  {
    if(vec[left] != vec[right]){
      isPalindrome = false;
      break;
    }
    left++, right--;
  }

  if (isPalindrome)
  {
    cout << "YES the Array is Palindrome !!";
  }
  else
  {
    cout << "NO the Array is Palindrome !!";
  }
}