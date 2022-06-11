// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    
    void solve(vector<int>&ans,vector<int>&arr,int N,int i,int summ)
    {
        if(i==N)
        {
            ans.push_back(summ);
            return;
        }
        solve(ans,arr,N,i+1,summ+arr[i]);
        solve(ans,arr,N,i+1,summ);
    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>ans;
        int summ{};
        sort(arr.begin(),arr.end());
        solve(ans,arr,N,0,summ);
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends