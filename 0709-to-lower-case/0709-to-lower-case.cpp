class Solution {
public:
    string toLowerCase(string s) 
    {
        string ans{};
        
        for(char c:s)
        {
            if(isupper(c))
            {
                int val=c-'A';
                val+=97;
                char x=(char)val;
                ans+=x;
            }
            else
            {
                ans+=c;   
            }
        }
        return ans;
        
    }
};