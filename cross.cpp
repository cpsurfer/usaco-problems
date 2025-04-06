#include<bits/stdc++.h>
using namespace td;

int main()
{
  int n;
  cin>> n;
  vector<pair<int,int>> vec(n);
  for(int i=0;i<n;i++)
  {
    int first,second;
    cin>>first>>second; 
    vec.push_back({first,second});
  }
  sort(vec.begin,vec.end());
  
  
  return 0;
}