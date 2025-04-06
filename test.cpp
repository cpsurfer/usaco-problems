#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> visited;

void dfs(int s)
{
  if(visited[s]) return;
  visited[s] = true;
  cout << s << " ";  // Print visited node
  for(auto u : adj[s])
  {
    dfs(u);
  }
}

int main(){
  int n,m;
  cin>> n >> m;
  adj.resize(n);
  visited.resize(n);
  
  cout << "Enter " << m << " edges (format: a b):" << endl;
  for(int i=0; i<m; i++)
  {
    int a , b;
    cin>> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  
  cout << "DFS traversal starting from node 0: ";
  dfs(0);
  cout << endl;
  return 0;
}
