#include <iostream>
#include <cstdlib> /* rand() */
#include <ctime>

using namespace std;

int main()
{
  long elapsedSeconds = time(0);
  srand(elapsedSeconds);
  cout << rand();

  return 0;
}

/*
  NOTE: rand() in C++ is not the same as Math.random() in JS
*/