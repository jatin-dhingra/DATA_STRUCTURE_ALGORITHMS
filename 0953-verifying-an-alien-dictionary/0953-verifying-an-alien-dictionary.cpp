class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) 
    {
        int n=order.size();
        unordered_map<char,char>m;
        for(int i{};i<n;i++)
        {
            m[order[i]]=('a'+i);
        }
        
        for(int i{};i<words.size();i++)
        {
            for(int j{};j<words[i].size();j++)
            {
                words[i][j]=m[words[i][j]];
            }
        }
        if(is_sorted(words.begin(),words.end()))
        {
            return true;
        }
        return false;
        
        
    }
};