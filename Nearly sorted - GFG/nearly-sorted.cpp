// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return the sorted array.
    vector <int> nearlySorted(int arr[], int num, int K){
        // Your code here
        vector<int>anss;
        int n=num;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i{};i<n;i++)
        {
            pq.push(arr[i]);
            if(pq.size()>K)
            {
                anss.push_back(pq.top());
                pq.pop();
            }
        }
        while(!pq.empty())
        {
            anss.push_back(pq.top());
            pq.pop();
            
        }
        return anss;
    }

};

// { Driver Code Starts.

int main()
 {
	int T;
	cin>> T;
	
	while (T--)
	{
	    int num, K;
	    cin>>num>>K;
	    
	    int arr[num];
	    for(int i = 0; i<num; ++i){
	        cin>>arr[i];
	    }
	    Solution ob;
	    vector <int> res = ob.nearlySorted(arr, num, K);
	    for (int i = 0; i < res.size (); i++)
	        cout << res[i] << " ";
	        
	    cout<<endl;
	}
	
	return 0;
}
  // } Driver Code Ends