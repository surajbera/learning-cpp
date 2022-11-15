#include<iostream>
using namespace std;

int main() {
  int num1=5;
  int num2=8;

  cout<<"Left Shift - "<<(num1<<1)<<endl;
  cout<<"Right Shift - "<<(num1>>1)<<endl;
  cout<<"Bitwise AND - "<<(num1&num2)<<endl;
  cout<<"Bitwise OR - "<<(num1|num2)<<endl;

  return 0;
}