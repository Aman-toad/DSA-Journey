#include <bits/stdc++.h>
using namespace std;

// fast I/O
void fast_io()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
}

// build prefix sum array from 'arr'
vector<long long> build_prefix_sum(const vector<int> &arr)
{
  int n = arr.size();
  vector<long long> prefix(n + 1, 0); // prefix[0] = 0
  for (int i = 1; i <= n; i++)
  {
    prefix[i] = prefix[i - 1] + arr[i - 1];
  }
  return prefix;
}

// get sum of subarray[l,r]
long long range_sum(const vector<long long> &prefix, int l, int r)
{
  return prefix[r] - prefix[l - 1];
}

// debug printing
template <typename T>
void print_vector(const vector<T> &v)
{
  for (auto &x : v)
    cout << x << " ";
  cout << "\n"
}

// ======================
// MAIN TEMPLATE
// ======================

int main()
{
  fast_io();

  int n;
  cout << "Enter size of array: ";
  cin >> n;

  vector<int> arr(n);
  cout << "Enter array elements: ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  // build prefix sum
  vector<long long> prefix = build_prefix_sum(arr);

  cout << "Prefix sum array: ";
  print_vector(prefix);

  // example query
  int q;
  cout << "Enter number of queries: ";
  cin >> q;
  while (q--)
  {
    int l, r;
    cout << "Enter l and r: ";
    cin >> l >> r;
    cout << "Sum from " << l << " to " << r << " = " << range_sum(prefix, l, r) << "\n";

    return 0;
  }
}