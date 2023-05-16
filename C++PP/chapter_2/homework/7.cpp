/*#########################################################################
# File Name: 7.cpp
# Author:Merlin
# Created Time: Thu 26 Jan 2023 09:06:23 PM CST
#########################################################################*/
#include <iostream>

using namespace std;
int main()
{
  cout << "Enter the number of hours:" << endl;
  int hours;
  cin >> hours;
  cin.get();
  cout << "Enter the number of minutes:" << endl;
  int minutes;
  cin >>minutes;
  cout << "Time: " << hours << " : " << minutes << endl;
  return 0;
}
