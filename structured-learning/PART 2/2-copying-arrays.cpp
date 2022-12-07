#include <iostream>
using namespace std;

int main()
{
  int first[] = {10, 20, 30};
  int second[3];
  cout << second << endl;

  /* invalid in C++ */
  // second = first

  for (int i = 0; i < sizeof(first) / sizeof(int); i++)
  {
    second[i] = first[i];
  }

  cout << second;

  return 0;
}