/*#########################################################################
# File Name: 1.cpp
# Author:Merlin
# Created Time: Fri 10 Feb 2023 09:16:34 PM CST
#########################################################################*/
#include <iostream>
using namespace std;
void convert(int h);
int main(void)
{
  cout << "Please enter your height." << endl;
  double height;
  cin >> height;
  convert(height);
  return 0;
}
void convert(int h)
{
  double in;
  const int c = 12;
  in = h/c;
  cout << in <<endl;
}
