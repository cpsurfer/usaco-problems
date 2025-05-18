#include <bits/stdc++.h>
using namespace std;

/*

vector<int> prefix_sum(vector<int> &arr)
{
  int n = arr.size();
  vector<int> prefix(n + 1);
  prefix[0] = 0;
  for (int i = 1; i <= n; i++)
  {
    prefix[i] = prefix[i - 1] + arr[i - 1];
  }
  return prefix;
}

int main()
{
  int n, x;
  cin >> n >> x;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  vector<int> pre = prefix_sum(arr);
  int count = 0;

  // Check all subarrays
  for (int i = 0; i < n; i++) // Start index
  {
    for (int j = i; j < n; j++) // End index
    {
      int sum = pre[j + 1] - pre[i];
      if (sum == x)
      {
        count++;
      }
    }
  }

  cout << count << endl;
}*/

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  long long x;
  cin >> n >> x;

  vector<long long> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  map<long long, long long> freq;
  freq[0] = 1;

  long long sum = 0;
  long long count = 0;

  for (int i = 0; i < n; i++)
  {
    sum += arr[i];

    count += freq[sum - x]; // freq[] is now long long
    freq[sum]++;
  }

  cout << count << '\n';
  return 0;
}
