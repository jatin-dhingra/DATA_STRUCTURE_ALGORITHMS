#include <bits/stdc++.h>
using namespace std;

void dfs(int &i,vector<int>&vis,vector<int>&vec[],vector<int>&storedfs)
{
    storedfs.push_back(i);
    vis[i]=1;
    for(auto it:vec[i])
    {
      if(!vis[it])
      {
        dfs(it,vis,vec,storedfs);
      }
    }
}


int main()
{
  int n{},m{};
  cin>>n>>m;
  vector<int>vec[n+1];
  for(int i{};i<m;i++){
    int u{},v{};
    cin>>u>>v;
    vec[u].push_back(v);
    vec[v].push_back(u);
  }
  vector<int>vis(n+1,0);
  vector<int>storedfs
  for(int i{};i<n;i++)
  {
    if(!vis[i]){
      dfs(i,vis,vec,storedfs);
    }
  }
  for(auto i:storedfs)
  {
    cout<<i<<" ";
  }cout<<endl;



}
