#include <iostream>
using namespace std;

int main()
{
  int first[3] = {10, 20, 30};
  int second[3] = {10, 20, 30};

  bool areEqual = true;

  for (int i = 0; i < sizeof(first) / sizeof(int); i++)
  {
    if (first[i] != second[i])
    {
      areEqual = false;
      break;
    }
  }

  cout << boolalpha << areEqual;

  return 0;
}