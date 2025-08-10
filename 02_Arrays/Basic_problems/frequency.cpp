#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
  vector<int> vec = {1, 2, 3, 2, 4, 2, 5};

  map<int, int> freq;

  for (int num : vec)
  {
    freq[num]++;
  }

  for (auto pair : freq)
  {
    cout << pair.first << " occurs " << pair.second << " times\n";
  }

  return 0;
}