#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> hooves(n + 1), paper(n + 1), scissors(n + 1);
  for (int i = 1; i <= n; i++)
  {
    hooves[i] += hooves[i - 1];
    paper[i] += paper[i - 1];
    scissors[i] += scissors[i - 1];

    char action;
    cin >> action;
    if (action == 'H')
    {
      paper[i]++;
    }
    else if (action == 'P')
    {
      scissors[i]++;
    }
    else if (action == 'S')
    {
      hooves[i]++;
    }
  }
  int max_wins = 0;
  for (int i = 1; i <= n; i++)
  {
    int before_wins = max(hooves[i], max(paper[i], scissors[i])); // you can't compare more than 2
    int after_wins = max(
        {hooves[n] - hooves[i], paper[n] - paper[i], scissors[n] - scissors[i]});
    max_wins = max(max_wins, before_wins + after_wins);
  }
  cout << max_wins << endl;
}