#include <iostream>
#include <vector>
#include <map>
using namespace std;
// If prefix_sum[i] % n == prefix_sum[j] % n,
// then the sum of the subarray from i + 1 to j is divisible by n.
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  map<int, long long> freq;
  freq[0] = 1;

  long long sum = 0;
  long long count = 0;

  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
    int mod = ((sum % n) + n) % n; // Ensure non-negative mod
    // If prefix_sum[i] % n == prefix_sum[j] % n,
    // then the sum of the subarray from i + 1 to j is divisible by n.

    count += freq[mod];
    freq[mod]++;
  }

  cout << count << '\n';
  return 0;
}
