class Solution {
public:
    bool areAlmostEqual(string s1, string s2) 
    {
        int count{};
        int n=s1.size();
        if(n<=2)
        {
            sort(s1.begin(),s1.end());
            sort(s2.begin(),s2.end());
            return s1==s2;
        }
        map<char,int>m1,m2;
        for(char c:s1)
        {
            m1[c]++;
            
        }
        for(char c:s2)
        {
            m2[c]++;
        }
        for(int i{};i<n;i++)
        {
            if(s1[i]!=s2[i])
            {
                count++;
            }
        }
       return (count<=2 && m1==m2);
        
    }
};