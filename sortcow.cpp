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
  int c=0;
  for(int i=1; i<n; i++)
  {
    swap(a[i],a[i-1]);
    c++;
  }
  if(min(a[0],a[n-1])==a[n-1])
  {
    c++;
  }
  cout<< c<< "\n";
  return 0;
}