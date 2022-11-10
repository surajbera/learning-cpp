#include<iostream>
using namespace std;

int main() {
  cout<<"Solution is wrong";
  int a, b, c;
  cout<<"Enter 2 numbers a and b"<<endl;
  cin>>a;
  cin>>b;
  cout<<"Value of a: "<<a<<endl;
  cout<<"Value of b: "<<b<<endl;
  c = a;
  a = b;
  cout<<"Value of a: "<<a<<endl;
  cout<<"Value of b: "<<c<<endl;
  return 0;
}