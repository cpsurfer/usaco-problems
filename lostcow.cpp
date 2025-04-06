#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Read the shuffle permutation
    vector<int> shuffle(n);
    for (int i = 0; i < n; i++) {
        cin >> shuffle[i];
        shuffle[i]--; // Convert to 0-based index
    }

    // Read the final order of cows
    vector<int> finalOrder(n);
    for (int i = 0; i < n; i++) {
        cin >> finalOrder[i];
    }

    // Compute the inverse permutation
    vector<int> inv(n);
    for (int i = 0; i < n; i++) {
        inv[shuffle[i]] = i;
    }

    // Apply the inverse shuffle three times
    vector<int> currentOrder = finalOrder;
    for (int step = 1; step <= 3; step++) {
        vector<int> newOrder(n);
        for (int i = 0; i < n; i++) {
            newOrder[inv[i]] = currentOrder[i];
        }
        currentOrder = newOrder;
    }

    // Output the initial order
    for (int i = 0; i < n; i++) {
        cout << currentOrder[i] << endl;
    }

    return 0;
}