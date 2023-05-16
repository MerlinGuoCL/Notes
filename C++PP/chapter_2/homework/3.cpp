/*#########################################################################
# File Name: 3.cpp
# Author:Merlin
# Created Time: Thu 26 Jan 2023 08:22:46 PM CST
#########################################################################*/
#include <iostream>
void mice(void);
void fun(void);
using namespace std;
int main(void)
{
  mice();//调用无返回值无输入值的函数不能加void，直接打个括号就可以了
  mice();
  fun();
  fun();
  return 0;
}

void mice(void)
{
  cout << "Three blind mice" << endl;
}

void fun(void)
{
  cout << "See how they run" << endl;
}
