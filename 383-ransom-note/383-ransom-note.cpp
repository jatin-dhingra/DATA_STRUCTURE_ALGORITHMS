class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        vector<int>v(27,0);
        int n=ransomNote.size();
        int m=magazine.size();
        string s=ransomNote;
        string t=magazine;
        for(int i{};i<m;i++)
        {
            v[t[i]-'a']++;
        }
        for(int i{};i<n;i++)
        {
            if(v[s[i]-'a']==0)
            {
                return false;
            }
           v[s[i]-'a']--;
            
        }
        return true;
    }
};