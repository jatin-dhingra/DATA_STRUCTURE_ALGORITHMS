class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        vector<vector<string>>ans;
        map<string,vector<string>>m;
        for(auto i:strs)
        {
            string j=i;
            sort(j.begin(),j.end());
            m[j].push_back(i);
        }
        for(auto i:m)
        {
            vector<string>v;
            for(auto j:i.second)
            {
                v.push_back(j);
            }
            ans.push_back(v);
        }
        return ans;
        
    }
};