class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& inter, vector<int>& newinter) 
    {
        vector<vector<int>>ans;
        
        int n=inter.size();
        int i{};
        
        while(i<n && inter[i][1]<newinter[0])
        {
            ans.push_back(inter[i++]);
        }
        
        vector<int>v;
        
        while(i<n && inter[i][0]<=newinter[1])
        {
            newinter[0]=min(newinter[0],inter[i][0]);
            newinter[1]=max(newinter[1],inter[i][1]);
            i++;
        }
        ans.push_back(newinter);
        
        while(i<n)
        {
            ans.push_back(inter[i++]);
        }
        return ans;
    }
};