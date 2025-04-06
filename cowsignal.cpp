#include<bits/stdc++.h>
using namespace std;

int main() {
    int m, n, K;
    cin >> m >> n >> K; // Read dimensions and repetition factor
    for(int i = 0; i < m; i++) {
        string inline_str;
        cin >> inline_str; // Read a single row of input
        
        string outline = "";
        // Repeat each character K times
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < K; k++) {
                outline += inline_str[j];
            }
        }


        
        
        // Print the modified row K times
        for(int i = 0; i < K; i++) {
            cout << outline << endl;
        }
    }
    return 0;
}
