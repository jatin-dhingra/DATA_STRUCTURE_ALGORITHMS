#include <bits/stdc++.h>
using namespace std;
void allsubse(int i,vector<int>&ans,int s,int sum,vector<int>&v,int n)
{
    if(i==n)
    {
      if(s==sum)
      {
        for(auto it:ans)
        {
          cout<<it<<" ";
        }cout<<endl;
      }
      return;
    }

    ans.push_back(v[i]);
    s+=v[i];
    allsubse(i+1,ans,s,sum,v,n);
    s-=v[i];
    ans.pop_back();
    allsubse(i+1,ans,s,sum,v,n);

}
int main()
{
  vector<int>v{1,3,4,2,1,3};
  int n=6;
  vector<int>ans;
  int sum=4;

  allsubse(0,ans,0,sum,v,n);

}
