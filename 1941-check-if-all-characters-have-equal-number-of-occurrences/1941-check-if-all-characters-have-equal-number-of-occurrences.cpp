class Solution {
public:
    bool areOccurrencesEqual(string s) 
    {
        map<char,int>mp;
        for(int i{};i<s.size();i++)
        {
            mp[s[i]]++;
        }
        set<int>st;
        for(auto i:mp)
        {
            st.insert(i.second);
        }
        return st.size()==1;
        
    }
};