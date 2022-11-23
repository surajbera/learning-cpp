#include <iostream>
using namespace std;

int main()
{
  char ch;
  cin >> ch;

  switch (ch)
  {
  case 'a':
    cout << ch << " -> It is a vowel";
    break;

  case 'e':
    cout << ch << " -> It is a vowel";
    break;

  case 'i':
    cout << ch << " -> It is a vowel";
    break;

  case 'o':
    cout << ch << " -> It is a vowel";
    break;

  case 'u':
    cout << ch << " -> It is a vowel";
    break;

  default:
    cout << ch << " -> It is not a vowel";
    break;
  }

  return 0;
}