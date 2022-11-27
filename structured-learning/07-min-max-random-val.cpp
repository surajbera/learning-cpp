#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
  const short minValue = 1;
  const short maxValue = 6;

  srand(time(0));

  short randomVal = (rand() % (maxValue - minValue + 1)) + minValue;
  cout << randomVal;

  return 0;
}

/*
  NOTE: Good use of constants for storing magic numbers
*/