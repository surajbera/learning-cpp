#include <iostream>
using namespace std;

int main()
{
  int arr[10] = {110, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int arrayLength = sizeof(arr) / sizeof(arr[0]);
  int max = arr[0];

  for (int idx = 0; idx < arrayLength; idx++)
  {
    if (idx == 0)
      continue;
    if (max < arr[idx])
    {
      max = arr[idx];
    }
  }

  cout << "Maximum value is -> " << max;

  return 0;
}