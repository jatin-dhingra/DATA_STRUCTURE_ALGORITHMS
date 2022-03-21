 #include <bits/stdc++.h>
 using namespace std;

 void solve(int arr[],int n)
 {
   stack<int>st;
   vector<int>v;

   for(int i{n-1};i>=0;i--)
   {
     if(st.empty())
     {
       v.push_back(-1);
     }
     else if(st.top()>arr[i] && st.size()>0){
       v.push_back(st.top());
     }
     else if(st.top()<=arr[i] && st.size()>0){
       while(!st.empty() && st.top()<=arr[i])
       {
         st.pop();
       }
       if(st.empty())
       {
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
   }cout<<"\n";

 }


 int main()
 {
   int arr[]{1,3,0,0,1,2,4};
   int n=sizeof(arr)/sizeof(arr[0]);
    solve(arr,n);
 }
