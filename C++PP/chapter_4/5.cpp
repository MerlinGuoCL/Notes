/*#########################################################################
# File Name: 5.cpp
# Author:Merlin
# Created Time: Tue 21 Feb 2023 04:12:23 PM CST
#########################################################################*/
#include <iostream>
using namespace std;
int main()
{
  int a = 5;
  int *b;
  b = &a;
  cout << *b <<endl;
  cout << b << endl;
}
