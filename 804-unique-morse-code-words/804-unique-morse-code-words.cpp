class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words)
    {
        unordered_set<string> st;
        vector<string> w = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        for(auto word : words) {
            string ans = "";
            for(char c : word) {
                ans += w[c - 'a'];
            }
            st.insert(ans);
        }
        return st.size();
        
    }
};