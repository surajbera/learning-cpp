/* Print the first multiple of 6, which is also a multiple of 7 */

#include<iostream>
using namespace std;

int main() {
  int i=6;

  while(true) {
    if(i%7==0) {
      cout<<"Value of i -> "<<i<<endl;
      break;
    }
    i+=6;
  }

  return 0;
}