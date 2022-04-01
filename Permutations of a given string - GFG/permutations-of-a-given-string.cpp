// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	    void solve(vector<string>&ans,int i,int n,string S)
	    {
	        if(i>=n)
	        {
	            ans.push_back(S);
	            return;
	        }
	        for(int x{i};x<n;x++)
	        {
	            swap(S[x],S[i]);
	            solve(ans,i+1,n,S);
	            swap(S[x],S[i]);
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    int i=0;
		    int n=S.size();
		    vector<string>ans;
		    solve(ans,i,n,S);
		    sort(ans.begin(),ans.end());
		    return ans;
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends