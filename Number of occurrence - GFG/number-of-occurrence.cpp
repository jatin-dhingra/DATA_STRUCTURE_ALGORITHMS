// { Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
		
	void first(vector<int>&nums,int target,vector<int>&ans)
    {
        int n=nums.size();
        int s=0;
        int e=n-1;
        //  0 1  2  3  4  5
        // 9  10 10 10 10 12
        int temp{-1};
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(nums[mid]==target)
            {
                temp=mid;
                e=mid-1;
            }
            else if(nums[mid]<target)
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        ans.push_back(temp);
        
    }
    void last(vector<int>&nums,int target,vector<int>&ans)
    {
        int n=nums.size();
        int s=0;
        int e=n-1;
        int temp{-1};
        while(s<=e)
        {
             int mid=s+(e-s)/2;
             if(nums[mid]==target)
            {
                temp=mid;
                s=mid+1;
            }
            else if(nums[mid]<target)
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }  
        }
        
        ans.push_back(temp);
    }
	int count(int arr[], int n, int target) {
	    // code here
	    vector<int>nums;
	    for(int i{};i<n;i++)
	    {
	        nums.push_back(arr[i]);
	    }
	    vector<int>ans;
	    first(nums,target,ans);
	    last(nums,target,ans);
	    int val1=ans[0];
	    int val2=ans[1];
	    if(val1==-1 || val2==-1)
	    {
	        return 0;
	    }
	    return val2-val1+1;
	    
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends