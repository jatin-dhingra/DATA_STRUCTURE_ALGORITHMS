// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    
    void recur(vector<int>&arr, int N,vector<int>&ans,int ind,int summ)
    {
        if(ind==N)
        {
            ans.push_back(summ);
            return;
        }
        recur(arr,N,ans,ind+1,summ+arr[ind]);
        recur(arr,N,ans,ind+1,summ);
        
        
    }
    
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        int ind=0;
        vector<int>ans;
        int summ{};
        
        recur(arr,N,ans,ind,summ);
        sort(ans.begin(),ans.end());
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