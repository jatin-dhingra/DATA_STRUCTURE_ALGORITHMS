#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[]{100,80,60,70,60,75,85};
  int n=sizeof(arr)/sizeof(arr[0]);
  stack<pair<int,int>>st;
  vector<int>v;

  for(int i{};i<n;i++)
  {
    if(st.empty())
    {
      v.push_back(-1);
    }
    else
    {
      if(!st.empty() && st.top().first>arr[i])
      {
        v.push_back(st.top().second);
      }
      if(!st.empty() && st.top().first<=arr[i]){
        while(!st.empty() && st.top().first<=arr[i])
        {
          st.pop();
        }
        if(st.empty()){
          v.push_back(-1);
        }
        else
        {
          v.push_back(st.top().second);
        }
      }
    }
    st.push({arr[i],i});
  }
  vector<int>ans(n);
  for(int i{};i<n;i++){
    ans[i]=i-v[i];
  }
  for(int i:ans){
    cout<<i<<" ";
  }
}
