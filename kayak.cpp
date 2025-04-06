#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int n;
    cin >> n;
    vector<int> w(2 * n);
    
    for (int &x : w) {
        cin >> x;
    }
    
    sort(w.begin(), w.end()); 
    
    int min_instability = INT_MAX;

    
    for (int i = 0; i < 2 * n; i++) {        
        for (int j = i + 1; j < 2 * n; j++) {
            
            vector<int> remaining;
            
            
            for (int k = 0; k < 2 * n; k++) {
                if (k != i && k != j) {
                    remaining.push_back(w[k]);
                }
            }
            
            
            int instability = 0;
            for (int k = 1; k < remaining.size(); k += 2) {
                instability += (remaining[k] - remaining[k - 1]);
            }

           
            min_instability = min(min_instability, instability);
        }
    }

    cout << min_instability << endl;
    return 0;
}
