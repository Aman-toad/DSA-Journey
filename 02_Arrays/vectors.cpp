#include <iostream>
#include <vector>
using namespace std;

//first leetcode
//single number, problem:136
void singleNum(){
  vector<int> nums = {4,1,2,1,2};

  //applying xor
  int ans = 0;
  for(int val: nums){
    ans = ans ^ val;
  }

  cout<<"single number is: "<<ans<<endl;
}


int main()
{
  // syntax
  vector<int> vec = {1, 2, 3}; // 1
  cout << vec[0] << endl;

  vector<int> vect(3, 0); // 3 is size of the vector and 0 is the index value;

  for (int i : vec)
  {
    cout << i << " ";
  }
  cout << endl;

  // vector functions

  //   size
  int size = vec.size();
  cout << size;

  cout << endl;

  // push_back
  vec.push_back(4);
  cout << "after push back = ";
  for (int i : vec)
  {
    cout << i;
  }

  cout << endl;

  // pop back
  vec.pop_back();
  cout << "after pop back = ";
  for (int i : vec)
  {
    cout << i;
  }
  

  cout << endl;

  // front
  cout << "first value of vector is " << vec.front() << endl;

  // back
  cout << "last value of vector is " << vec.back() << endl;

  // at = same as vec[i]
  cout << vec.at(2);

  cout<<endl;

  // static vs dynamic allocation
  // static = compile time , stack memory
  // dynamic = run time => vector that can resize during runtime, heap memory

  // vector doubles itself and store the element in it
  vector<int> myVector;

  myVector.push_back(0);
  myVector.push_back(1);
  myVector.push_back(2);

  cout << myVector.size() << endl;     // 3
  cout << myVector.capacity() << endl; // 4
  

  //leetcode
  singleNum();
  return 0;
}