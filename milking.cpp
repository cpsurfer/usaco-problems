#include <bits/stdc++.h>
using namespace std;

void check(vector<int> order,vector<int> &heirarchy,vector<int> &visited){
    vector<int> cow_to_pos(n,-1);
    for( int i = 0; i < n; i++){
      if(order[i]!=-1)
      {
        cow_to_pos[order[i]] = i;
      }
    }
}