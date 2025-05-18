#include <bits/stdc++.h>
using namespace std;

int N, M;
bool visited[100005];
vector<pair<int, int>> rtb;
vector<int> adj[100005];

void dfs(int node)
{
  if (visited[node])
    return;
  visited[node] = true;
  for (auto neighbor : adj[node])
    dfs(neighbor);
}

int main()
{
  cin >> N >> M;
  for (int i = 0; i < M; i++)
  {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  dfs(1);

  for (int i = 1; i <= N; i++)
  {
    if (!visited[i])
    {
      adj[1].push_back(i);
      adj[i].push_back(1);
      rtb.push_back({1, i});
      dfs(i);
    }
  }

  cout << rtb.size() << endl;
  for (auto road : rtb)
    cout << road.first << ' ' << road.second << endl;
}