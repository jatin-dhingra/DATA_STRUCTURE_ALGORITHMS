class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inter) 
    {
        int n=inter.size();
        vector<vector<int>>ans;
        if(n==0)
        {
            return ans;
        }
        sort(inter.begin(),inter.end());
        vector<int>main=inter[0];
        for(vector<int>i: inter)
        {
            if(i[0]<=main[1])
            {
                main[1]=max(main[1],i[1]);
            }
            else
            {
                ans.push_back(main);
                main=i;
            }
        }
        ans.push_back(main);
        return ans;
    }
};