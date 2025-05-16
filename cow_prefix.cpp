#include <bits/stdc++.h>
using namespace std;

int count(vector<int> v, int x, int y)
{
  int n = v.size();
  int c1, c2, c3;
  c1 = c2 = c3 = 0;
  for (int i = x - 1; i < y; i++)
  {
    if (v[i] == 1)
      c1++;
    else if (v[i] == 2)
      c2++;
    else
      c3++;
  }
  cout << c1 << " " << c2 << " " << c3 << endl;
}

int main()
{
  int n, q;
  cin >> n >> q;
  vector<int> v1(n);
  int a, b;
  for (int i = 0; i < n; i++)
  {
    cin >> v1[i];
  }
  for (int i = 0; i < q; i++)
  {
    cin >> a >> b;
    count(v1, a, b);
  }
}