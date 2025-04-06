#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,k;
  cin>> n>> k;
  int most=0;
  vector<int> v(n);
  for(int i=0;i<n;i++)
  {
    cin>> v[i];
  }
  for(int i=0;i<n;i++)
  {
    int fittable=0;
    for(int j=0;j<n;j++)
    {
      if(v[i]<=v[j] && v[j]<=v[i]+k)
      {
        fittable++;
      }
    }
    most=max(most,fittable);
  }
   cout<< most << endl;
  return 0;
}