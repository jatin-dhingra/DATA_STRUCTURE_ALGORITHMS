class Solution {
public:
    string defangIPaddr(string a)
    {
        vector<char>v;
        
        int n=a.size();
        for(int i{};i<n;i++)
        {
            if(a[i]=='.')
            {
                v.push_back('[');
                v.push_back('.');
                v.push_back(']');
            }
            else
            {
                v.push_back(a[i]);
            }
        }
        string ans{};
        for(int i{};i<v.size();i++)
        {
            ans.push_back(v[i]);
        }
        return ans;
        
    }
};