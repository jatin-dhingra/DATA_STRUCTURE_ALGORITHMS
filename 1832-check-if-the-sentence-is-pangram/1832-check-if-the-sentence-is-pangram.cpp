class Solution {
public:
    bool checkIfPangram(string s) 
    {
        map<char,int>m;
        for(char c:s)
        {
            m[c]++;
        }
        if(m.size()!=26)
        {
            return false;
        }
        return true;
        
    }
};