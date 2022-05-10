class Solution {
public:
    void function(vector<vector<int>>&ans,vector<int>v,int inc,int k,int n)
    {
        if(n<0 || v.size()>k )
        {
            
            return;
        }
        if(n==0 && v.size()==k)
        {
            ans.push_back(v);
            return;
        }
       
        for(int i=inc;i<=9;i++)
        {
            v.push_back(i);
            function(ans,v,i+1,k,n-i);
            v.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum3(int k, int n)
    {
        vector<vector<int>>ans;
        vector<int>v;
        
        int check=n;
        function(ans,v,1,k,n);
        return ans;
        
    }
};