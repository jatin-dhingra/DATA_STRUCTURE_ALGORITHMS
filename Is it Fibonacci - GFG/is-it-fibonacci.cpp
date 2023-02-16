//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long solve(int n, int k, vector<long long> nums) {
        // code here
        long long ans{};
        vector<long long>pre;
        for(int i{};i<k;i++)
        {
            pre.push_back(nums[i]);
        }
        long long ind{};
        
        for(int i{};i<n-k;i++)
        {
            long long sum{};
            for(int j{ind};j<k+ind;j++)
            {
                sum+=pre[j];
            }
            ind++;
            pre.push_back(sum);
        }
        // for(int i:pre)
        // {
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        return pre[n-1];
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<long long> GeekNum(K);

        for (int i = 0; i < K; i++) cin >> GeekNum[i];

        Solution ob;
        cout << ob.solve(N, K, GeekNum) << "\n";
    }
    return 0;
}

// } Driver Code Ends