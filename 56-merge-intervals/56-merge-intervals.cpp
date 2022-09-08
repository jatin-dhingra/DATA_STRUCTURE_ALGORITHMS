class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) 
    {
        vector<vector<int>>ans;
        sort(v.begin(),v.end());
        vector<int>vec=v[0];
        for(auto i:v)
        {
            if(vec[1]>=i[0])
            {
                vec[1]=max(vec[1],i[1]);
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