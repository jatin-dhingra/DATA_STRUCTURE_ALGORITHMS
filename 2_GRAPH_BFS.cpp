#include <bits/stdc++.h>
using namespace std;

vector<int>bfsgraph(vector<int>vec[],int m)
{
  vector<int>bfs; // traversal node
  vector<int>vis(m+1,0); 
  for(int i{1};i<=m;i++)
  {
    if(!vis[i])
    {
      queue<int>q;
      q.push(i);
      vis[i]=1;
      while(!q.empty())
      {
        int k=q.front();
        q.pop();
        bfs.push_back(k);
        for(auto it:vec[k]){
          if(!vis[it])
          {
            q.push(it);
            v[it]=1;
          }
        }
      }
    }
  }
  for(auto i:bfs)
  {
    cout<<i<<" ";
  }
  cout<<endl;

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
  bfsgraph(vec,n);



}
