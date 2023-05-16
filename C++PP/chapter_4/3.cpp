/*#########################################################################
# File Name: 3.cpp
# Author:Merlin
# Created Time: Tue 21 Feb 2023 02:07:22 PM CST
#########################################################################*/
#include <iostream>
#include <string>
#include <cstring>
int main()
{
  using namespace std;
  string str1 = {"1","2"};
  string str2 = {"3","4"};
  string str3 = str1;
  string str4 = str1+str2;
  cout << str3 << endl;
  cout << str4 << endl;
}
