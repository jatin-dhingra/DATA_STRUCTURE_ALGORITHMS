class Solution {
public:
    string removeDuplicates(string s, int k) 
    {
        string ans{};
        vector<pair<char,int>>vec;
        for(char c:s)
        {
            if(vec.size()==0 || vec.back().first!=c)
            {
                vec.push_back({c,1});
            }
            else if(++vec.back().second==k)
            {
                vec.pop_back();
            }
            
        }
        for(auto i:vec)
        {
            while(i.second--)
            {
                ans+=i.first;
            }
        }
        
        return ans;
        
    }
};