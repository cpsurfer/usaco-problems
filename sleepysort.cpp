#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>> n;
  vector<int> a(n);
  for(int i=0; i<n; i++)
  {
    cin>> a[i];
  }
  int ans=n-1;
  for(int i=n-2; i>=0; --i)
  {
    if(a[i]<a[i+1])
    {
      ans=i;
    }
    else
    {
      break;
    }
  }
  cout<< ans<< "\n";
  return 0;
}