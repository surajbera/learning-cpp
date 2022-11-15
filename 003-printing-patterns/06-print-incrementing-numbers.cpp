#include<iostream>
using namespace std;

int main() {
  int counter = 0;

  for (int i = 1; i < 6; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout<<++counter<<" ";
    }
    cout<<endl;
  }
  

  return 0;
}