class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
    {
        int n=gas.size();
        int total{},ans{},check{};
        for(int i{};i<n;i++)
        {
            int consume=gas[i]-cost[i];
            ans+=consume;
            if(ans<0)
            {
                check=i+1;
                ans=0;
            }
            total+=consume;
        }
        if(total<0)
        {
            return -1;
        }
        else
        {
            return check;
        }
        
    }
};