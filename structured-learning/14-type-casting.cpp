#include <iostream>
using namespace std;

int main()
{
  int x = 10;
  int y = 3;
  double z = static_cast<double>(x) / y;
  /* NOTE: type cast double to any one of them */
  cout << z;

  return 0;
}