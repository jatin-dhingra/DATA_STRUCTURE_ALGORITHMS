class Solution {
public:
    bool closeStrings(string word1, string word2) 
    {
        unordered_map<char,int>a,b;
        for(char c:word1)
        {
            a[c]++;
        }
        for(char c:word2)
        {
            b[c]++;
        }
        for(auto it=a.begin(); it!=a.end(); it++)
        {
            if(b.find(it->first)==b.end()){
                return false;
            }
        }
        vector<int>vec1,vec2;
        for(auto i:a)
        {
            vec1.push_back(i.second);
            
        }
        for(auto i:b)
        {
            vec2.push_back(i.second);
        }
        sort(vec1.begin(),vec1.end());
        sort(vec2.begin(),vec2.end());
        for(int i{};i<max(vec1.size(),vec2.size());i++)
        {
            if(vec1[i]!=vec2[i])
            {
                return false;
            }
        }
        return true;
    }
};