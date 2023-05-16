/*#########################################################################
# File Name: 4.cpp
# Author:Merlin
# Created Time: Sat 11 Feb 2023 02:40:11 PM CST
#########################################################################*/
#include <iostream>
using namespace std;
int main(void)
{
  cout << "Enter the number of seconds: " << endl;
  long int seconds;
  cin >> seconds;
  int days, hours, minutes, second;
  const int convert1 = 60*60*24;
  const int convert2 = 60*60;
  const int convert3 = 60;
  days = seconds / convert1;
  hours = (seconds - days*convert1)/convert2;
  minutes = (seconds - days*convert1 - hours*convert2) / convert3;
  second = seconds - days*convert1 - hours*convert2 - minutes*convert3;
  cout << seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << second << " seconds." << endl;
  return 0;
}
