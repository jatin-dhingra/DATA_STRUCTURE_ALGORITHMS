class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) 
    {
        int n=mat.size();
        int m=mat[0].size();
        vector<int>vec;
        
        map<int,vector<int>>mp;
        for(int i{};i<n;i++)
        {
            for(int j{};j<m;j++)
            {
                mp[i+j].push_back(mat[i][j]);
            }
        }
        for(auto i:mp)
        {
            
            if(!(i.first&1))
            {
                vector<int>temp;
                for(auto x:i.second)
                {
                    temp.push_back(x);
                }
                reverse(temp.begin(),temp.end());
                for(auto i:temp)
                {
                    vec.push_back(i);
                }
            }
            else
            {
                vector<int>temp;
                for(auto x:i.second)
                {
                    temp.push_back(x);
                }
                for(auto i:temp)
                {
                    vec.push_back(i);
                }
            }
        }
        
        return vec;
        
    }
};