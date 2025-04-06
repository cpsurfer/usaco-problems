#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> limit(100);
    vector<int> bessie(100);
    int length ,speed, pos=0;
    for(int i=0;i<n;i++)
    {
      cin>> length >> speed;
      for(int j=pos;j<pos+length;j++)
      {
        limit[j]=speed;
      }
      pos+=length;
    }
    pos=0;
    for(int i=0;i<m;i++)
    {
      cin>> length>> speed;
      for(int j=0;j<pos+length;j++)
      {
        bessie[j]=speed;
      }
      pos+=length;
    }
    int maxover=0;
    for(int i=0;i<100;i++)
    {
      maxover=max(maxover,bessie[i]-limit[i]);
    }
    cout<< maxover<< endl;
    return 0;
}

