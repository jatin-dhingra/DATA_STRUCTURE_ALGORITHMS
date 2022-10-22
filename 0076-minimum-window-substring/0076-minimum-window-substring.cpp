class Solution {
public:
    string minWindow(string s, string t) 
    {
        int n=s.size();
        int m=t.size();
        if(m>n)
        {
            return "";
        }
        if(m==n && s==t)
        {
            return s;
        }
        map<char,int>mp;
        for(char c:t) 
        {
            mp[c]++;
        }
        
        int requiredCount=m;
        int i{},j{};
        int minStart{};
        int minWindow{INT_MAX};
        while(j < n) 
        {
            char ch_j = s[j];
            if(mp[ch_j] > 0)
                requiredCount--;
            
            mp[ch_j]--;
            while(requiredCount == 0) { 
                if(minWindow > j-i+1) {
                    minWindow = j-i+1;
                    minStart  = i;
                }
                
                char ch_i = s[i];
                mp[ch_i]++;
                if(mp[ch_i] > 0) 
                    requiredCount++;
                i++;
            }
            
            j++;
        }
        
        return minWindow == INT_MAX ? "" : s.substr(minStart, minWindow);
        
    }
};