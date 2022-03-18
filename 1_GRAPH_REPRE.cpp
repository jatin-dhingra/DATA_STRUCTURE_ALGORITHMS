#include <bits/stdc++.h>
using namespace std;
int main()
{

  // adjacency matrix;
  
  int n{},m{};
  cin>>n>>m;
  int arr[n+1][n+1];
  for(int i{};i<m;i++){
    int u{},v{};
    cin>>u>>v;
    arr[u][v]=1;
    arr[v][u]=1;
  }
  for(int i{};i<n;i++)
  {
    for(int j{};j<n;j++){
      cout<<arr[i][j]<<" ";
    }cout<<endl;
  }

  // adjacency list;

  int n{},m{};
  cin>>n>>m;
  vector<int>vec[n+1];
  for(int i{};i<m;i++){
    int u{},v{};
    cin>>u>>v;
    vec[u].push_back(v);
    vec[v].push_back(u);
  }
  
}
