class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2)
    {
        long long ans{};
        for(int i{};i<=total/cost1;i++)
        {
            int val=total-cost1*i;
            ans+=int(val/cost2)+1;
        }
        return ans;
        
    }
};