class Solution {
public:
    map<string,int>st;
    
    bool check(string word)
    {
        int n=word.size();
        for(int i{1};i<=n;i++)
        {
            string prefix = word.substr(0 , i);
            string suffix = word.substr(i , word.size()-i);
    
            if(st[prefix] != 0 && (st[suffix] != 0 || check(suffix)))
            {
                return true;
            } 
        }
        return false;
    }
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words)
    {
        vector<string>ans;
        for(auto word : words){
            st[word]++;
        }
        for(auto word : words)
        {
            if(check(word)){
                ans.push_back(word);
            }
        }
        return ans;
    }
};