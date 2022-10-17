class Solution {
public:
    bool checkIfPangram(string s) 
    {
        map<char,int>m;
        for(char c:s)
        {
            m[c]++;
        }
        return (m.size()==26?1:0);
        
    }
};