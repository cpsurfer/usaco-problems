#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    // Initialize the positions of the shells
    vector<int> shell_at_pos(3);
    for (int i = 0; i < 3; i++) {
        shell_at_pos[i] = i;
    }
    
    // Initialize counters for correct guesses
    vector<int> counter(3);
    
    // Process the swaps and guesses
    for (int i = 0; i < n; i++) {
        int a, b, g;
        cin >> a >> b >> g;
        
        // Convert to 0-based indexing
        a--, b--, g--;
        
        // Perform the swap
        swap(shell_at_pos[a], shell_at_pos[b]);
        
        // Increment the counter for the guessed shell
        counter[shell_at_pos[g]]++;
    }
    
    // Output the maximum number of correct guesses
    cout << max({counter[0], counter[1], counter[2]}) << endl;
    return 0;
}
