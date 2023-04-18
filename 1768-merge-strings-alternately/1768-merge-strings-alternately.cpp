class Solution {
public:
    string mergeAlternately(string w, string t) 
    {
        string ans{};
        int n=w.size();
        int m=t.size();
        int i{},j{};
        while(i<n && j<m)
        {
            ans+=w[i++];
            ans+=t[j++];
        }
        while(i<n)
        {
            ans+=w[i++];
        }
        while(j<m)
        {
            ans+=t[j++];
        }
        return ans;
    }
};