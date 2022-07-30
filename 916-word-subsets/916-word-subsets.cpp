class Solution {
public:
    vector<int>counter(string s)
    {
        vector<int>v(26);
        for(int i=0;i<s.size();i++)
        {
            v[s[i]-'a']++;
        }
        return v;
    }
    vector<string> wordSubsets(vector<string>& A, vector<string>& B)
    {  
        
        int i;
        vector<int>count(26);
        vector<int>v(26);
        for(string it:B)
        {
            v=counter(it);
            for( i=0;i<26;i++)
            {
                count[i]=max(count[i],v[i]);
            }
        }
        vector<string>ans;
        for(auto it:A)
        {
            v=counter(it);
            for(i=0;i<26;i++)
            {
                if(count[i]>v[i])
                {
                    break;
                }
            }
            if(i==26)
            {
               ans.push_back(it);
            }
        }
        return ans;
    }
};