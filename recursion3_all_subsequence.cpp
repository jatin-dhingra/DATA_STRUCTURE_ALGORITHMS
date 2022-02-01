#include <bits/stdc++.h>
using namespace std;
void allsubse(vector<int>&v,int n,vector<int>&ans,int i)
{
    if(i>=n){
      for(auto i:ans)
      {
        cout<<i<<" ";
      }cout<<endl;
      return;
    }
    ans.push_back(v[i]);
    allsubse(v,n,ans,i+1);
    ans.pop_back();
    allsubse(v,n,ans,i+1);

}
int main()
{
  vector<int>v{3,1,2};
  int n=v.size();
  vector<int>ans;
  allsubse(v,n,ans,0);
}
