/*#########################################################################
# File Name: 4.cpp
# Author:Merlin
# Created Time: Tue 21 Feb 2023 01:44:29 PM CST
#########################################################################*/
#include<iostream>
struct information
{
  char name[20];
  int age;
  char address[20];
};
int main()
{
  using namespace std;
  information a =
  {
    "MerlinGuo",
    26,
    "cqjtu"
  };
  cout << a.name << endl;

}
