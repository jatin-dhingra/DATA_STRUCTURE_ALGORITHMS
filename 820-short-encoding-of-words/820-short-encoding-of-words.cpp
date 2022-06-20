class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        unordered_map<string, bool> mp, res;
        for(string word: words) {
            string key;
            int n = word.size();
            for(int i=word.size()-1; i>0; i--) {
                key = word.substr(i, n-i);
                mp[key] = true;
            }
        }
        int ans = 0;
        for(string word: words) {
            if(!mp.count(word) && !res.count(word)) {
                ans += (word.size()+1);
                res[word] = true;
            }
        }
        return ans;
    }
    
};