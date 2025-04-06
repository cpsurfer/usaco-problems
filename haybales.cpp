#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> haybales(n);
    for(auto &i: haybales) 
    cin >> i;
    sort(haybales.begin(), haybales.end());
    while(q--) {
      int a, b;
      cin >> a >> b;
      int count=0;
      for(int i=0; i<n; i++) {
        if(haybales[i]>=a && haybales[i]<=b) {
          count++;
        }
      }
      cout << count << endl;
    }
    return 0;
}