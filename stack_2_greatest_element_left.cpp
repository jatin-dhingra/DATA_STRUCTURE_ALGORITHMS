#include <bits/stdc++.h>
using namespace std;

void solve(int arr[],int n)
{
  vector<int>v;
  stack<int>st;
  for(int i{};i<n;i++){
    if(st.empty())
    {
      v.push_back(-1);
    }
    else if(!st.empty() && st.top()>arr[i])
    {
      v.push_back(st.top());
    }
    else if(!st.empty() && st.top()<=arr[i])
    {
      while(!st.empty() && st.top()<=arr[i])
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
  reverse(v.begin(),v.end());
  for(auto i:v){
    cout<<i<<" ";
  }cout<<endl;
}

int main(){
  int arr[]{1,3,0,0,1,2,4};
  int n=sizeof(arr)/sizeof(arr[0]);
   solve(arr,n);
}
