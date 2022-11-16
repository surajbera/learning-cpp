#include <iostream>
using namespace std;

int main()
{
  int n = 5;
  for (int line = 1; line <= n; line++)
  {
    /* kitne spaces print karna hai */
    int no_of_spaces = (n - line);
    for (int k = 0; k < no_of_spaces; k++)
    {
      cout << " ";
    }

    /* kitne characters print karna hai - 1 */
    int no_of_characters = 2 * line - 1;
    for (int j = 0; j < no_of_characters; j++)
    {
      char ch = (char)('A' + j);
      cout << ch;
    }
    cout << '\n';
  } /* outer loop */
  return 0;
}