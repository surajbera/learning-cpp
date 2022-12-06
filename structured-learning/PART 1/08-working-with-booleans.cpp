#include <iostream>
using namespace std;

int main()
{
  bool isNewUser = false;
  // cout << isNewUser;

  /*
    - want to see true/false in terminal instead of 1/0
    - boolalpha is a string manipulator
  */
  cout << boolalpha << isNewUser;
  return 0;
}