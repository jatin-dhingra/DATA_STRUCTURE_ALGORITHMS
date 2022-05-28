class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inter) 
    {
        
        vector<vector<int>>ans;
        if(inter.size()==0)
        {
            return ans;
            
        }
        
        sort(inter.begin(),inter.end());
        vector<int>vec=inter[0];
        
        for(vector<int> i:inter)
        {
            if(i[0]<=vec[1])
            {
                vec[1]=max(i[1],vec[1]);
            }
            else
            {
                ans.push_back(vec);
                vec=i;
            }
        }
        ans.push_back(vec);
        return ans;
    }
    
};