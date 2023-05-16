/*#########################################################################
# File Name: 1.cpp
# Author:Merlin
# Created Time: Fri 10 Feb 2023 09:16:34 PM CST
#########################################################################*/
#include <iostream>
using namespace std;
double convert(int h);
int main(void)
{
  cout << "Please enter your height." << endl;
  double height;
  cin >> height;
  double in = convert(height);
  cout << in << endl;
  return 0;
}
double convert(int h)
{
  double in;
  const int c = 12;
  in = h/c;
  return in;
}
