class Solution {
public:
    int hammingDistance(int x, int y) {
        int c= (x^y);
        //0101
        int ans{};
        
        while(c)
        {
            ans+=(c&1);
            c>>=1;
        }
        return ans;
        
    }
};