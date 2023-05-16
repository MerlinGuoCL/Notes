/*#########################################################################
# File Name: vec.cpp
# Author:Merlin
# Created Time: Thu 23 Feb 2023 04:11:27 PM CST
#########################################################################*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int>vec1;
  if (vec1.empty())
    cout << "vec is empty." <<endl;
  vec1.push_back(3);
  cout << vec1.size();
}
