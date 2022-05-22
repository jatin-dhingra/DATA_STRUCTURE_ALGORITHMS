class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) 
    {
        int count{};
        int  n=capacity.size();
        vector<int>diff;
        for(int i{};i<n;i++)
        {
            diff.push_back(capacity[i]-rocks[i]);
        }
        
        sort(diff.begin(),diff.end());
        for(int i{};i<diff.size();i++)
        {
            
            if(additionalRocks-diff[i]>=0)
            {
                additionalRocks-=diff[i];
                diff[i]=0;
            }
        }
        for(auto i:diff)
        {
            if(i==0)
            {
                count++;
            }
        }
        return count;
        
    }
};