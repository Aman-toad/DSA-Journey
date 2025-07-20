#include <iostream>
using namespace std;

// smallest and largest value
void small_large()
{
  int arr[] = {5, 15, 22, 1, -15, 24};
  int size = sizeof(arr) / sizeof(arr[0]);

  int smallest = arr[0];
  int largest = arr[0];

  // for the smallest
  for (int i = 0; i < size; i++)
  {
    if (arr[i] < smallest)
    {
      smallest = arr[i];
    }
  }

  for (int i = 0; i < size; i++)
  {
    if (arr[i] > largest)
    {
      largest = arr[i];
    }
  }

  cout << "The smallest element in the array is: " << smallest << endl;
  cout << "The largest element in the array is: " << largest << endl;
}

// arrays are implicitely pass by reference ;

// Linear search
void linearSearch()
{
  int arr[] = {4, 2, 7, 8, 1, 2, 5};
  int size = sizeof(arr) / sizeof(arr[0]);
  int target = 8, index;

  for (int i = 0; i < size; i++)
  {
    if (arr[i] == target)
      index = i;
    else
      index = -1;
  }

  cout << "Element found at index: " << index << endl;
}

// Reverse an Array
void reverseArray()
{
  int arr[] = {4, 2, 7, 8, 1, 2, 5};
  int size = sizeof(arr) / sizeof(arr[0]);

  int start = 0, end = size - 1;

  while (start < end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }

  cout << "[";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << ", ";
  }
  cout << "]";

}
int main()
{
  small_large();
  linearSearch();
  reverseArray();

  return 0;
}