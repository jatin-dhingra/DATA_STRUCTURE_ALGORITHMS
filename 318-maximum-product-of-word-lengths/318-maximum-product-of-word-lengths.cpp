class Solution {
public:
     int maxProduct(vector<string>& words) {
        int len = words.size();
        vector<int> mask(len);
        
        for(int i = 0; i < len; i++) {
            int sz = words[i].size();
            for(int j = 0; j < sz; j++) {
                mask[i] |= (1 << (words[i][j] - 'a'));
            }
        }
        
        int ans = 0;
        for(int i = 0; i < len; i++) {
            for(int j = 0; j < i; j++) {
                if(mask[i] & mask[j]) continue;
                int p = words[i].size()*words[j].size();
                if(p > ans) ans = p;
            }
        }
        
        return ans;
    }
};