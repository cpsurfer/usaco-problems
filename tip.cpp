#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    // Initialize the 2D vector with size n x n
    vector<vector<int>> rect(n, vector<int>(n));
    
    // Read the input into the 2D vector
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> rect[i][j];
        }
    }
    
    int ans = 0;
    bool  mis=false;
    
    // Count the number of non-zero elements
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(rect[i][j] != 0) {
              if(!mis)
              {
                mis=true;
                ans++;
              }else
                {
                  mis=false;
                }
            }
        }

        
    }
    
    cout << ans << endl;
    return 0;
}