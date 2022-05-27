class Solution {
public:
    int numberOfSteps(int num) 
    {
        int count{};
        while(num>0)
        {
            if(num&1)
            {
                num-=1;
                count++;
            }
            else
            {
                num/=2;
                count++;
            }
            
            
        }
        return count;
        
    }
};