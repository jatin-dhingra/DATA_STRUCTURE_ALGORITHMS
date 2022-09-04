class Solution {
public:
    string removeStars(string s) 
    {
        vector<char>dq;
        for(char c:s)
        {
            if(c=='*')
            {
                dq.pop_back();
            }
            else
            {
                dq.push_back(c);
            }
        }
        string ans{};
        for(auto i:dq)
        {
            ans+=i;
        }
        return ans;
        
    }
};