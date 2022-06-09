// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>>q;
        for(int i{};i<n;i++)
        {
            q.push_back({end[i],start[i]});
        }
        int count{1};
        sort(q.begin(),q.end());
        int st=q[0].second;
        int en=q[0].first;
        for(int i{1};i<n;i++)
        {
            if(q[i].second>en)
            {
                count++;
                st=q[i].second;
                en=q[i].first;
            }
        }
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends