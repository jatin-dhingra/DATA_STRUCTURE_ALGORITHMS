class Solution {
public:
    string replaceDigits(string s)
    {
        for(int i=1;i<s.size();i+=2)
        {
            int val=(s[i-1])+s[i]-'0';
            s[i]=(char)val;
        }
        return s;
        
        
    }
};