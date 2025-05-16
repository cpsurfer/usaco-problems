#include <bits/stdc++.h>
using namespace std;

vector<int> prefixsum(vector<int> &a)
{
  int n = a.size();
  vector<int> prefix(n + 1); // prefix[0] = 0, prefix[1] = a[0], ...
  prefix[0] = 0;
  for (int i = 1; i <= n; i++)
  {
    prefix[i] = prefix[i - 1] + a[i - 1];
  }
  return prefix;
}

int main()
{
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  vector<int> pre = prefixsum(v);
  int largest = 0;

  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j <= n; j++)
    {
      int sum = pre[j] - pre[i];
      if (sum % 7 == 0)
      {
        if (j - i > largest)
        {
          largest = j - i;
        }
      }
    }
  }

  cout << largest << endl;
  return 0;
}
