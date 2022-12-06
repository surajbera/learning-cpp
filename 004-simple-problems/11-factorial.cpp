/**
 * Program to calculate factorial
 */

#include <iostream>
using namespace std;

int fact(int num)
{
  int result = 1;
  while (num >= 0)
  {
    result *= num;
    --num;
  }
  return result;
}

int main()
{
  int num;
  cin >> num;
  cout << fact(10);

  return 0;
}