#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string str;
    cin >> str;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == '.') {
            int cnt = 0;
            while (i < n && str[i] == '.') {
                cnt++;
                i++;
            }
            if (cnt >= 3) {
                cout << "2\n";
                return;


                
            }
            ans += cnt;
        }
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
