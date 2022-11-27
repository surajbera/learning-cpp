/*
  Write a program that asks the user a series of questions like street, city, state, and zip code and then prints the user's address in this format:

  Street
  City, State, ZipCode
*/

#include <iostream>
using namespace std;

int main()
{
  string street;
  cout << "Enter street -> ";
  getline(cin, street);

  string city;
  cout << "Enter city -> ";
  getline(cin, city);

  string state;
  cout << "Enter state -> ";
  getline(cin, state);

  string zipcode;
  cout << "Enter zipcode -> ";
  getline(cin, zipcode);

  cout << street << ", " << city << ", " << state << ", " << zipcode;

  return 0;
}