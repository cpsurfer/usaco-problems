#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>> n;
  vector<pair<int,int>> a(n);
  for(int i=0; i<n; i++)
  {
    cin>> a[i].first;
    cin>> a[i].second;
  }
  sort(a.begin(), a.end());
  int tnow=0 , tnext=0;
  for(int i=0; i<n; i++)
  {
    if(tnext<=a[i].first)
    {
      tnow=a[i].first;
      tnext=tnow+a[i].second;
    }
    else{
      tnow+=a[i-1].second;
      tnext=tnow+a[i].second;
    }
  }
  cout<< tnext << "\n";
  return 0;
}