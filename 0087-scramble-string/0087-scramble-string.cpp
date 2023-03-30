class Solution {
public:
    unordered_map<string, int> mp;
    bool isScramble(string s1, string s2) {
        if(s1 == s2)
        {
            return true;
        }
        if(s1.length() <= 1)
        {
            return false;
        }  
        string key=s1+s2;
        if(mp.count(key))
        {
            return mp[key];
        }
        int n = s1.size();
        bool res = false;
        for(int i = 1; i < n; i++) {
            bool swap = isScramble(s1.substr(0, i), s2.substr(n-i, i)) && isScramble(s1.substr(i, n-i), s2.substr(0, n-i));
            bool noswap = isScramble(s1.substr(0, i), s2.substr(0, i)) && isScramble(s1.substr(i, n-i), s2.substr(i, n-i));
            if(swap || noswap)
            {
                res = true;
                break;
            }
        }
        mp[key] =res;
        return res;
    }
};