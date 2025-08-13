#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);

  int n, l, r;
  cout << "Enter array size: ";
  cin >> n;

  vector<int> arr(n);
  cout << "Enter " << n << " elements: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  // range query sum

  cout << "Enter L: ";
  cin >> l;
  cout << "Enter R: ";
  cin >> r;

  vector<int> prefix(n + 1, 0);
  cout << "The Sum between " << l << " and " << r << " : ";
  for (int i = 1; i <= n; i++)
  {
    prefix[i] = prefix[i - 1] + arr[i - 1];
  }

  int prefixSum = prefix[r] - prefix[l - 1];

  cout << "\n";

  cout << "Original array: ";
  for (int x : arr)
    cout << x << " ";
  cout << "\n";

  cout << "Prefix sum between " << l << " and " << r << " : ";
  cout << prefixSum;

  return 0;
}