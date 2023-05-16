/*#########################################################################
# File Name: 5.cpp
# Author:Merlin
# Created Time: Thu 26 Jan 2023 08:48:40 PM CST
#########################################################################*/
#include <iostream>
double convert(double a);
using namespace std;
int main(void)
{
  cout << "Please enter a Celsius value:" << endl;
  double Celsius;
  cin >> Celsius;
  double Fahrenheit;
  Fahrenheit = convert(Celsius);
  cout << Celsius << " degrees Celsius is " << Fahrenheit << " degrees Fahrenheit." << endl;
  return 0;
}

double convert(double a)
{
  return 1.8*a+32.0;
}
