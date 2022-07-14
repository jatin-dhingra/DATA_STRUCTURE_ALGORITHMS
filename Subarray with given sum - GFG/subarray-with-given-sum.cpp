// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        
        vector<int>ans;
        
        
        for(int i{};i<n;i++)
        {
            long long  sum{};
            for(int j=i;j<n;j++)
            {
                sum+=arr[j];
                if(sum==s)
                {
                    ans.push_back(i+1);
                    ans.push_back(j+1);
                    return ans;
                }
                if(sum>s)
                {
                    break;
                }
                
            }
            
        }
        ans.push_back(-1);
        return ans;
        
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends