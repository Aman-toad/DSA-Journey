#include <iostream>
using namespace std;

int main()
{
  int arr[] = {5, 2, 8, 1, 3};
  cout << "Original array: ";
  for (int i = 0; i < 5; i++)
    cout << arr[i] << " ";
  cout << endl;

  for (int i = 1; i < 5; i++)
  {
    int temp = arr[i];
    int j = i - 1;

    while (j >= 0 && arr[j] > temp)
    {
      arr[j + 1] = arr[j];
      j--;
    }

    arr[j + 1] = temp;
  }

  cout << "Sorted array: ";
  for (int i = 0; i < 5; i++)
    cout << arr[i] << " ";
  cout << endl;
}
