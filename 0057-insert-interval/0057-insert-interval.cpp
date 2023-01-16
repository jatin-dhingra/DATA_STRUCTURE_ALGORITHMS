class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& inter, vector<int>& newinter)
    {
        int n=inter.size()+1;
        
        inter.push_back(newinter);
        sort(inter.begin(),inter.end());
        for(auto i:inter)
        {
            cout<<i[0]<<" "<<i[1]<<endl;
        }
        int i{},j{1};
        vector<vector<int>>ans;
        ans.push_back(inter[i]);
        
        while(j<n)
        {
            if(ans[i][1]<inter[j][0])
            {
                i++;
                ans.push_back(inter[j]);
            }
            else
            {
                ans[i][1]=max(ans[i][1],inter[j][1]);
            }
            j++;
        }
        
        return ans;
        
    }
};