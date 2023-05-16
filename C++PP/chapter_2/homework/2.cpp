/*#########################################################################
# File Name: 2.cpp
# Author:Merlin
# Created Time: Thu 26 Jan 2023 07:54:16 PM CST
#########################################################################*/
#include <iostream>
double convert(double lo);
using namespace std;
int main(void)
{
  cout << "Please enter the long." << endl;
  double lm;
  double X;
  cin >> lm;
  X = convert(lm);
  cout << lm << " long = " << X << " Ma." << endl;
  return 0;
}

double convert(double lo)
{
  return 220*lo;
}
