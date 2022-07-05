class Solution {
public:
    int characterReplacement(string s, int k) 
    {
        int i=0,j=1, maxRepeating = 0, maxLen = 0;
        unordered_map<char, int> m;
        
		
        for(j=0; j<s.size(); j++){
            m[s[j]]++;
            maxRepeating = max(maxRepeating, m[s[j]]);
            
            if(j-i+1 - maxRepeating > k){
                m[s[i]]--;
                i++;
            }
            maxLen = max(maxLen, j-i+1);
        }
        return maxLen;

        
    }
};