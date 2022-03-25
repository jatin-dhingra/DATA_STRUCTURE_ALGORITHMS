#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[]{4,5,2,1,8};
  int n=sizeof(arr)/sizeof(arr[0]);
  stack<int>st;
  vector<int>v;
  for(int i{};i<n;i++)
  {
    if(st.empty()){
      v.push_back(-1);
    }
    else if(!st.empty() && st.top()<arr[i])
    {
      v.push_back(st.top());
    }
    else if(!st.empty() && st.top()>=arr[i])
    {
      while(!st.empty() && st.top()>=arr[i])
      {
        st.pop();
      }
      if(st.empty()){
        v.push_back(-1);
      }
      else
      {
        v.push_back(st.top());
      }
    }
    st.push(arr[i]);
  }
  for(auto i:v){
    cout<<i<<" ";
  }cout<<endl;
}
