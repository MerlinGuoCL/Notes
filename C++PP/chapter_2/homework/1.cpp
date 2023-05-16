/*#########################################################################
# File Name: 1.cpp
# Author:Merlin
# Created Time: Thu 26 Jan 2023 05:09:18 PM CST
#########################################################################*/
#include <iostream>
using namespace std;
int main()
{
  cout << "Please enter your name." << endl;
  char name[30];
  cin.get(name,30);
  //多次cin失效，缓存区会存储上一次回车，而导致下一次cin失效
  //法1：加一次cin.get把回车读取出来
  cin.get();
  //法2：清空并同步缓存区
  //cin.clear();
  //cin.sync();

  cout << "Please enter your address." << endl;
  char address[30];
  cin.get(address,30);
  cout << "Your name is " << name << " living in " << address << endl;
  return 0;
}
