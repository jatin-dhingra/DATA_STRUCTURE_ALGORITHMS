class Solution {
public:
    
    void solve(vector<vector<int>>&ans,vector<int>&cand,vector<int>&v,int t,int i)
    {
       if(t<=0)
       {
            if(t==0)
            {
                ans.push_back(v);
                
            }
           return;
       }
        
        for(int x=i;x<cand.size();x++)
        {
            v.push_back(cand[x]);
            solve(ans,cand,v,t-cand[x],x);
            v.pop_back();
        }
            
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& cand, int t) 
    {
        vector<vector<int>>ans;
        vector<int>v;
        int i=0;
        
        solve(ans,cand,v,t,i);
        
        return ans;
    }
};