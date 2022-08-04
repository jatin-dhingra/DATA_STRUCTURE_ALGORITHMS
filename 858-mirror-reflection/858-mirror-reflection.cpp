class Solution {
public:
    int mirrorReflection(int p, int q) {
        while(!(p&1) && !(q&1))
        {
            p/=2;
            q/=2;
            
        }
        if(!(q&1))
        {
            return 0;
        }
        if(!(p&1))
        {
            return 2;
        }
        
        return 1;
    }
};