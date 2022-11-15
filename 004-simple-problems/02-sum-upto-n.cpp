#include <iostream>
using namespace std;

int main()
{
  int sum = 0;
  int n;
  cin >> n;

  do
  {
    sum += n;
    --n;
  } while (n > 0);

  cout << "Value of sum -> " << (sum) << endl;

  return 0;
}