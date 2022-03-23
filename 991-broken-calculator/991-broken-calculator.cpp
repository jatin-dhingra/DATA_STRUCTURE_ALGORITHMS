class Solution {
public:
    int brokenCalc(int s, int t) 
    {
        int ans{};
        
        while(t>s)
        {
            ans++;
            if(t%2==0)
            {
                t/=2;
                
            }
            else
            {
                t++;
                
            }
        }
        return ans+s-t;
        
        
    }
};