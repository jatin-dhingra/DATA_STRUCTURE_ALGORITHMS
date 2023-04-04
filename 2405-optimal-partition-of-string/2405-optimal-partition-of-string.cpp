class Solution {
public:
    int partitionString(string s) 
    {
        int n=s.size();
        map<char,int>m;
        int count{};
        for(int i{};i<n;i++)
        {
            m[s[i]]++;
            if(m[s[i]]>1)
            {
                m.clear();
                i--;
                count++;
            }
            
        }
        return count+1;
    }
};