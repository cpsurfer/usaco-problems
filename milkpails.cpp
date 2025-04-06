#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, m;
    cin >> x >> y >> m;

    int max_sum = 0;

    // Iterate through all multiples of x within m
    for (int i = 0; i * x <= m; i++) {
        // Calculate remaining after using multiples of x
        int remaining = m - (i * x);

        // Use as many multiples of y as possible within the remaining
        int j = remaining / y;

        // Calculate the total sum for this combination
        int current_sum = (i * x) + (j * y);

        // Update max_sum if the current_sum is greater
        max_sum = max(max_sum, current_sum);
    }

    // Output the maximum sum that can be achieved
    cout << max_sum << endl;

    return 0;
}
