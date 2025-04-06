#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>> n;
  vector<int> vec(n);
  for(int &i: vec)
  {
    cin>> i;
  }
  vector<int> vec1(n);
  partial_sort_copy(begin(vec),end(vec),begin(vec1),end(vec1)); //create a sorted copy of vector without
  int count=0;                                                 // disturbing original vector
  for(int i=0;i<n;i++)
  {
    if(vec[i]!=vec1[i])
    count++;
  }
  cout<< count-1 <<endl;
  return 0;
}