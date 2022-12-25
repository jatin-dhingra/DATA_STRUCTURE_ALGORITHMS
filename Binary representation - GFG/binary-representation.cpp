//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    string getBinaryRep(int N)
    {
        // Write Your Code here
        string ans{};
        for(int i{};i<30;i++)
        {
            if(N<0)
            {
                ans.push_back('0');
            }
            else
            {
                if(N%2==0)
                {
                    ans.push_back('0');
                }
                else
                {
                    ans.push_back('1');
                }
                N>>=1;
                
            }
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
       
        Solution ob;
        string ans = ob.getBinaryRep(N);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends