class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& p, long long suc)
    {
        
        vector<int>ans;
        int n=spells.size();
        int m=p.size();
        
        sort(p.begin(),p.end());
        
        for(int i{};i<n;i++)
        {
            int s=0;
            int e=m-1;
            int val{-1};
            int count{};
            while(s<=e)
            {
                long long mid=s+(e-s)/2;
                
                if((long long) spells[i]*p[mid]>=suc)
                {
                    val=mid;
                    e=mid-1;
                   
                }
                else
                {
                    s=mid+1;
                    
                }
            }
            if(val!=-1)
            {
                val=m-val;
            }
            else
            {
                val=0;
            }
            ans.push_back(val);
        }
        return ans;
    }
};