#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> a(3);
  for(int &i: a)
  {
    cin>> i;
  }
  if(abs(a[0]-a[1])==2 || abs(a[1]-a[2])==2)
  {
    cout<< "1\n";
  }
  else if(abs(a[0]-a[1])==1 && abs(a[1]-a[2])==1)
  {
    cout<< "0\n";
  }
  else
  {
    cout<< "2\n";
  }
  int maximum= max((a[1]-a[0]),(a[2]-a[1]))-1;
  cout<< maximum<< "\n";
  return 0;
}