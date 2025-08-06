#include <iostream>
using namespace std;

// Merge two sorted halves into one sorted array
void merge(int arr[], int left, int mid, int right)
{
  int n1 = mid - left + 1; // Size of left half
  int n2 = right - mid;    // Size of right half

  // Create temporary arrays
  int L[n1], R[n2];

  // Copy data to temp arrays
  for (int i = 0; i < n1; i++)
    L[i] = arr[left + i];
  for (int j = 0; j < n2; j++)
    R[j] = arr[mid + 1 + j];

  // Merge the temp arrays back into arr[]
  int i = 0, j = 0, k = left;

  // Compare and merge
  while (i < n1 && j < n2)
  {
    if (L[i] <= R[j])
      arr[k++] = L[i++];
    else
      arr[k++] = R[j++];
  }

  // Copy any remaining elements of L[]
  while (i < n1)
    arr[k++] = L[i++];

  // Copy any remaining elements of R[]
  while (j < n2)
    arr[k++] = R[j++];
}

// Recursive function to divide and sort
void mergeSort(int arr[], int left, int right)
{
  if (left < right)
  {
    int mid = left + (right - left) / 2; // Find the middle point

    mergeSort(arr, left, mid);      // Sort left half
    mergeSort(arr, mid + 1, right); // Sort right half

    merge(arr, left, mid, right); // Merge sorted halves
  }
}

int main()
{
  int arr[] = {8, 4, 5, 2, 9, 1};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "Original array: ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;

  mergeSort(arr, 0, n - 1); // Call merge sort

  cout << "Sorted array: ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;

  return 0;
}
