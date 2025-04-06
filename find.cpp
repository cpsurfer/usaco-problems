#include<bits/stdc++.h>
using namespace  std;
int main()
{
  int x,y;
  cin>> x>> y;
  int walk=1;
  int totaldistance=0;
  int original=x;
  int oldpos=x;
  while(true)
  {
    oldpos=x;
    x=original;
    x+=walk;
    walk*=-2;
    if((oldpos<=y && y<=x) || (oldpos>=y && x<=y))
    {
      totaldistance+=abs(oldpos-y);
      break;
    }
    totaldistance+=abs(x-oldpos);
  }cout<< totaldistance<< endl;
  return 0;
}