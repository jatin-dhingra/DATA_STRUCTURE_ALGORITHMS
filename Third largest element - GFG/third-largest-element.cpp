//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#include <bits/stdc++.h>
class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
         //Your code here
         if(n<=2)
         {
             return -1;
         }
         priority_queue<int,vector<int>,greater<int>>pq;
         for(int i{};i<n;i++)
         {
             pq.push(a[i]);
             if(pq.size()>3)
             {
                 pq.pop();
             }
         }
         return pq.top();
    }

};

//{ Driver Code Starts.
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}   
// } Driver Code Ends