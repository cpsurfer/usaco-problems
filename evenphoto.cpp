#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>> n;
  string s;
  cin>> s;
  assert(s.size()==n && n%2==0);// check wether pairs can be formed
  int flips=0;//intialize pairs flips
  for(int c=n-2;c>=0;c-=2)//access pairs  from end
  {
    string sub=s.substr(c,2);//get end pairs from end in sub
    if(sub[0]==sub[1])//if both elements in pairs same continue
    {
      continue;
    }
    if((sub=="GH" && flips%2==0) || (sub=="HG" && flips%2==1))//even no of flips no change odd flips cahnge
                                                              //if gh is string and no change taknen place then 
                                                              //then flips is required and if hg is string 
                                                              //and one flip happens string becomes gh so again 
                                                              //flip is required
    {flips++;}
  }
  cout<< flips<< endl;
  return 0;


  
}