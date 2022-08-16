class Solution {
public:
    int firstUniqChar(string s) 
    {
        int n=s.size();
        map<char,int>m;
       
        for(int i{};i<n;i++)
        {
            m[s[i]]++;
        }
        
        for(int i{};i<n;i++)
        {
            for(auto j:m)
            {
                if(s[i]==j.first && j.second==1)
                {
                    return i;
                }
            }
        }
        return -1;
    }
};