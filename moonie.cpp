#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
  ll n,k;
  cin>> n>> k;
  vector<ll> days(n);
  for(ll &i: days)
  {
    cin>> i;
  }
  ll last=days[0];
  ll cost=k+1;
  for(ll d: days)
  {
    if(d-last<k+1)
    {
      cost+=d-last;
    }else{
      cost+=k+1;
    }
    last=d;
  }
  cout<< cost<< endl;

  return 0;
}