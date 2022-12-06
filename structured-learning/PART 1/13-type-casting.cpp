#include <iostream>
using namespace std;

int main()
{
  int x = 1;
  double y = 2.6;
  int z = x + static_cast<int>(y);
  cout << z;
  return 0;
}