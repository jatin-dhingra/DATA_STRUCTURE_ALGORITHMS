// { Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


 // } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    // bool comp(Job a, Job b)
    // {
    //     return a.profit>b.profit;
    // }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr,arr+n,[](auto&a,auto&b){
            return a.profit>b.profit;
        });
        int maxdead=arr[0].dead;
        for(int i{};i<n;i++)
        {
            maxdead=max(maxdead,arr[i].dead);
        }
        
        int vis[maxdead+1];
        
        memset(vis,-1,sizeof(vis));
        
        int count{},profit{};
        
        for(int i{};i<n;i++)
        {
            for(int j=arr[i].dead;j>0;j--)
            {
                if(vis[j]==-1)
                {
                    vis[j]=i;
                    count++;
                    profit+=arr[i].profit;
                    break;
                }
            }
        }
        return {count,profit};
        
    } 
};

// { Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}


  // } Driver Code Ends