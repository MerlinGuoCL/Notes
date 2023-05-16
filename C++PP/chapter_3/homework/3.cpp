/*#########################################################################
# File Name: 3.cpp
# Author:Merlin
# Created Time: Sat 11 Feb 2023 02:01:20 PM CST
#########################################################################*/
#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
  float minutes,seconds;
  double degree,degrees;
  const int convert = 60;
  cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
  cout << "First, enter the degree: " << endl;
  cin >> degrees;
  cin.get();
  cout << "Next,enter the minutes of arc: " << endl;
  cin >> minutes;
  cin.get();
  cout << "Next,enter the seconds of arc: " << endl; 
  cin >> seconds;
  cin.get();
  degree = degrees+minutes/convert+seconds/(convert*convert);
  cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << degree << " degrees." << endl;
  return 0;
}
