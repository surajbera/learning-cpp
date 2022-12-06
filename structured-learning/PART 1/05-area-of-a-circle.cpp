#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  cout << "Enter the radius: ";
  double radius;
  cin >> radius;
  const double PI = 3.14;
  double area = PI * pow(radius, 2);
  cout << endl
       << "Area of the circle -> " << area;
  return 0;
}

/*
  RULE 1: Avoid magic numbers as much as possible
 */