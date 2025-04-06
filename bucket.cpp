#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> maxcap(3);
  vector<int> currcap(3);
  for(int i=0;i<3;i++)
  {
    cin>> maxcap[i]>> currcap[i];
  }
  for(int i=0;i<100;i++)
  {
    int buck1=i%3;
    int buck2=(i+1)%3;
    int amt=min(currcap[buck1],maxcap[buck2]-currcap[buck2]);
    currcap[buck1]-=amt;
    currcap[buck2]+=amt;
  }
  for(int m: currcap)
  {
    cout<< m<< '\n';
  }
  return 0;
}