/*#########################################################################
# File Name: 4.cpp
# Author:Merlin
# Created Time: Thu 26 Jan 2023 08:41:20 PM CST
#########################################################################*/
#include <iostream>
int convert(int age);
using namespace std;
int main(void)
{
  cout << "Please Enter Your Age." << endl;
  int age;
  int month;
  cin >> age;
  month = convert(age);
  cout << "It includes " << month << " months." << endl;
  return 0;
}

int convert(int age)
{
  return 12*age;
}
