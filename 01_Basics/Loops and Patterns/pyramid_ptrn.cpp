#include <iostream>
using namespace std;

int main()
{
  int n = 4;
  // pattern
  //         1
  //       1 2 1
  //     1 2 3 2 1
  //   1 2 3 4 3 2 1

  // outer loop as usual
  // first inner loop for space which goes to n-i-1
  // second inner loop for num1 which goes from 1 to i + 1
  // third inner loop for num 2 which goes from i to 1 i.e backwards

  for (int i = 0; i < n; i++)
  {
    // first
    for (int j = 0; j < (n - i - 1); j++)
    {
      cout << " ";
    }
    // second
    for (int j = 1; j <= i + 1; j++)
    {
      cout << j;
    }
    // third
    for (int j = i; j > 0; j--)
    {
      cout << j;
    }
    cout << endl;
  }

  cout << endl;

  // Hollow diamond pattern
  //     *
  //    * *
  //   *   *
  //  *     *
  //   *   *
  //    * *
  //     *

  for (int i = 0; i < n; i++)
  {
    // spaces
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    cout << "*";

    if (i != 0)
    {
      for (int j = 0; j < 2 * i - 1; j++)
      {
        cout<<" ";
      }

      cout << "*";
    }
    cout<<endl;
  }

  //bottom 
  for (int i = 0; i < n-1; i++)
  {
    //spaces
    for (int j = 0; j < i+1;j++)
    {
      cout<<" ";
    }
    
    cout<<"*";

    if(i != n-2){
      //spaces
      for (int j = 0; j < 2*(n-i)-5; j++)
    {
      cout<<" ";
    }
      cout<<"*";
    }

    cout<<endl;
  }
  

  // butterfly pattern
}