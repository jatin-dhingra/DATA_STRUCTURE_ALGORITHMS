class Solution {
public:
    string toLowerCase(string s) 
    {
        string ans{};
        for(char c:s)
        {
            if(isupper(c))
            {
                ans+=(tolower(c));
            }
            else
            {
                ans+=c;
            }
        }
        
        return ans;
    }
};