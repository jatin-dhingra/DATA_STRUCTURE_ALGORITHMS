class Solution {
public:
    string removeStars(string s) 
    {
        vector<char>dq;
        for(int i{};i<s.size();i++)
        {
            if(s[i]=='*')
            {
                dq.pop_back();
                continue;
            }
            
            dq.push_back(s[i]);
                
        }
        string ans{};
        for(auto &i:dq)
        {
            ans+=i;
        }
        return ans;
        
    }
};