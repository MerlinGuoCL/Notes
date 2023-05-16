/*#########################################################################
# File Name: 3.1.cpp
# Author:Merlin
# Created Time: Wed 25 Jan 2023 08:18:08 PM CST
#########################################################################*/
#include <iostream>
#include <cmath>
double convert(double area);
using namespace std;
int main(void)
  {
    cout << "Please enter the floor area" << endl;
    double areas;
    cin >> areas;
    cout << "The side is " << convert(areas) << endl;
    return 0;
  }

double convert(double area)
{
  double side;
  side = sqrt(area);
  return side;
}
