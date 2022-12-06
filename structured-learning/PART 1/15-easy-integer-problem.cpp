#include <iostream>
using namespace std;

int maximumOfTwo(int a, int b)
{
  /* NOTE: This was my code */
  // if (a > b)
  //   return a;
  // else
  //   return b;

  /* NOTE: Solution */
  return (a > b) ? a : b;
}

int main()
{
  int result = maximumOfTwo(20, 10);
  cout << result << " is the max number.";

  return 0;
}