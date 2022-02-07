#include <bits/stdc++.h>
using namespace std;
//bool check{0};


int allsubse(int i,vector<int>&ans,int s,int sum,vector<int>&v,int n)
{
    if(i==n)
    {
      if(s==sum)
      {


        // for(auto it:ans)
        // {
        //   cout<<it<<" ";
        // }cout<<endl;
        return 1;
      }
      else
      {
        return 0;
      }
    }


    ans.push_back(v[i]);
    s+=v[i];
    int l=allsubse(i+1,ans,s,sum,v,n);
    s-=v[i];
    ans.pop_back();
    int r=allsubse(i+1,ans,s,sum,v,n);
    return l+r;

}
int main()
{
  vector<int>v{1,3,4,2,1,3};
  int n=6;
  vector<int>ans;
  int sum=4;

  cout<<allsubse(0,ans,0,sum,v,n);
  cout<<"count"<<endl;


}
