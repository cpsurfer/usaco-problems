#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<int> a(n);
  for(int i=0; i<n; i++)
  {
    cin>>a[i];
  }
  a[0]=0;
  int t=-1,req=0,pos=0;	
  for(int i=n-1; i>=0; i--)
  {
    if(t!=-1 && a[i]!=-1 && a[i]!=t)
    {
      cout<<"-1\n";
      return 0;
    }
    if(t==-1)
    {
      t=a[i];
    }
    if(a[i]==-1)
    {
      a[i]=t;
    }
    if(a[i]==0)
    {
      req++;
    }
    if(a[i]==-1)
    {
      pos++;
    }
    if(t>-1)
    {
      t--;
    }
  }
  cout<< req << ' ' << req+pos << "\n";
  return 0;
}