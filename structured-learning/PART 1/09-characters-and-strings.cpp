#include <iostream>
using namespace std;

int main()
{
  /* below code only reads suraj in suraj bera */
  // string name;
  // cout << "Enter your name: ";
  // cin >> name;
  // cout << "Hi " << name;

  string name2;
  cout << "Enter your name: ";
  getline(cin, name2);
  cout << "Hi " << name2;
  return 0;
}

/* NOTE: getline is defined in STD namespace */