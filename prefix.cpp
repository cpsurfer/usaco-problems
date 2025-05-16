#include <bits/stdc++.h>
using namespace std;

// Function to compute prefix sum
vector<int> prefix_sum(vector<int> v1)
{
  int n = v1.size();
  vector<int> v2(n + 1); // One extra element for the 0 at the beginning
  v2[0] = 0;
  for (int i = 0; i < n; i++)
  {
    v2[i + 1] = v2[i] + v1[i];
  }
  return v2;
}

// Main function to test prefix_sum
int main()
{
  // Sample input vector
  vector<int> v1 = {3, 1, 4, 2};

  // Call the function
  vector<int> result = prefix_sum(v1);

  // Print the result
  cout << "Prefix sum array:\n";
  for (int i = 0; i < result.size(); i++)
  {
    cout << result[i] << " ";
  }
  cout << endl;

  return 0;
}
