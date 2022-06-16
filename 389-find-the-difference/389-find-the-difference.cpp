class Solution {
public:
    char findTheDifference(string s, string t)
    {
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        
        int sum1{},sum2{};
        for(int i{};i<s.size();i++)
        {
            sum1+=(s[i]-'a');
        }
        for(int i{};i<t.size();i++)
        {
            sum2+=(t[i]-'a');
        }
        return (char)(sum2-sum1+97);
        
        
        
    }
};