#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> adj;
vector<int> color;

bool bfs(int start)
{
  queue<int> q;
  q.push(start);
  color[start] = 1;

  while (!q.empty())
  {
    int curr = q.front();
    q.pop();

    for (int neighbor : adj[curr])
    {
      if (color[neighbor] == 0)
      {
        color[neighbor] = 3 - color[curr]; // Alternate between 1 and 2
        q.push(neighbor);
      }
      else if (color[neighbor] == color[curr])
      {
        return false; // Same color on both sides of an edge => not bipartite
      }
    }
  }
  return true;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;

  adj.resize(n + 1);
  color.resize(n + 1, 0);

  for (int i = 0; i < m; i++)
  {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  for (int i = 1; i <= n; i++)
  {
    if (color[i] == 0)
    {
      if (!bfs(i))
      {
        cout << "IMPOSSIBLE\n";
        return 0;
      }
    }
  }

  for (int i = 1; i <= n; i++)
  {
    cout << color[i] << " ";
  }
  cout << '\n';

  return 0;
}
