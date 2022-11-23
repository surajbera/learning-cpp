/*
  Search if a given element is present in the array or not. If it is not present then return -1 else return the index
*/
#include <iostream>
using namespace std;

int main()
{
  int arr[10] = {110, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int arrayLength = sizeof(arr) / sizeof(arr[0]);

  int elementToFind = 110;
  int ans = -1;

  for (int idx = 0; idx < arrayLength; idx++)
  {
    if (arr[idx] == elementToFind)
    {
      ans = idx;
      break;
    }
  }

  cout << ans;

  return 0;
}