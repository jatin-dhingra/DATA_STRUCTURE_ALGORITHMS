// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> changeBits(int N) {
        // code here
        vector<int>v;
        int val=N;
        int count;
        while(val>0)
        {
            count++;
            val>>=1;
        }
        int mainval=(1<<count)-1;
        v.push_back(abs(N-mainval));
        v.push_back(mainval);
        
        return v;
        
    }

};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        Solution ob;
        auto ans = ob.changeBits(N);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends