#include <iostream>
using namespace std;

int main()
{
  string names[3];
  cout << "Enter first name -> ";
  getline(cin, names[0]);

  cout << "Enter Second name -> ";
  getline(cin, names[1]);

  cout << "Enter Third name -> ";
  getline(cin, names[2]);

  cout << names;

  return 0;
}