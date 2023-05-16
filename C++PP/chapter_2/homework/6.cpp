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
  cout << "Enter the number of light years:" << endl;
  double ly;
  cin >> ly;
  double au;
  au = convert(ly);
  cout << ly << " light years = " << au << " astronomical units." << endl;
  return 0;
}

double convert(double a)
{
  return 63240*a;
}
