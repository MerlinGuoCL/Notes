/*#########################################################################
# File Name: 1.cpp
# Author:Merlin
# Created Time: Mon 31 Oct 2022 03:37:22 PM CST
#########################################################################*/
#include <iostream>
using namespace std;
int main (void)
{
  cout << "Please Enter Your Name:" << endl;
 wchar_t name;
 wchar_t address;
  cin >> name;
  cout << "Please Enter Your Address:" << endl;
  cin >> address;
  cout << "This is your name: " << name << " and this is your address: " << address << endl;
  return 0;
}
