/*#########################################################################
# File Name: 2.cpp
# Author:Merlin
# Created Time: Sat 11 Feb 2023 11:43:07 AM CST
#########################################################################*/
#include <iostream>

using namespace std;
int main(void)
{
  int in, inch;
  double wei, BMI;
  cout << "Please enter your in." << endl;
  cin >> in;
  cin.get();
  cout << "Please enter your inch." << endl;
  cin >> inch;
  cin.get();
  cout << "Please enter your wei." << endl;
  cin >> wei;
  cin.get();
  const int convert1 = 12;
  const double convert2 = 0.0254;
  const double convert3 = 2.2;
  double h = (in*convert1+inch)*convert2;
  double w = wei/convert3;
  BMI = w/h;
  cout << "your BMI is " << BMI << endl;
  return 0;
}
