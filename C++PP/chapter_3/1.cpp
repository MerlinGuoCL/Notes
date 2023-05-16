/*#########################################################################
# File Name: 1.cpp
# Author:Merlin
# Created Time: Sat 28 Jan 2023 02:11:31 PM CST
#########################################################################*/
#include <iostream>
#include <climits>
#define Zero 0
int main(void)
{
  using namespace std;
  short sam = SHRT_MAX;
  unsigned short sue = sam;
  cout << sam << endl;
  cout << sue << endl;
  sam = sam + 1;
  sue = sue + 1;
  cout << "Sam has " << sam << " dollars and Sue has " << sue;
  cout << " dollars deposited. \n Poor Sam!" << endl;
  sue = Zero;
  cout << sue <<endl;
  sue = sue - 1;
  cout << sue << endl;
  return 0;
}
