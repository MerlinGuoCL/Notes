/*#########################################################################
# File Name: 4.cpp
# Author:Merlin
# Created Time: Tue 21 Feb 2023 01:44:29 PM CST
#########################################################################*/
#include<iostream>
#include<string>
using namespace std;
struct information
{
  string name;
  string age;
  string address;
};
int main()
{
  information a =
  {
    "MerlinGuo",
    "26",
    "cqjtu"
  };
  cout << a.name << " , " << a.age << " and " << a.address << endl;

}
