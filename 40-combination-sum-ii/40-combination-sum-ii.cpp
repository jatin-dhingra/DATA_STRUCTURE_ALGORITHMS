class Solution {
public:
    
    void solve(vector<vector<int>>&ans,vector<int>&cand,vector<int>&v,int t,int ind)
    {
        if(t==0)
        {
            ans.push_back(v);
        }
        
        for(int x=ind;x<cand.size();x++)
        {
            if(x>ind && cand[x]==cand[x-1])
            {
                continue;
            }
            
            if(cand[x]>t)
            {
                break;
            }
            v.push_back(cand[x]);
            solve(ans,cand,v,t-cand[x],x+1);
            v.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& cand, int t) 
    {
        vector<vector<int>>ans;
        
        vector<int>v;
        
        sort(cand.begin(),cand.end());
        int ind=0;
        solve(ans,cand,v,t,ind);
        return ans;
    }
};