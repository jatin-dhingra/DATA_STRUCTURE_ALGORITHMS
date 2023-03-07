class Solution {
public:
    long long timetaken(vector<int>&time,long long mid)
    {
        long long count{};
        for(auto i:time)
        {
            count+=mid/i;
        }
        return count;
    }
    long long minimumTime(vector<int>& time, int trip) 
    {
        long long st{};
        long long end=1e14;
        long long ans{end};
        while(st<=end)
        {
            long long mid=st+(end-st)/2;
            if(timetaken(time,mid)>=trip)
            {
                ans=mid;
                end=mid-1;
            }
            else
            {
                st=mid+1;
            }
        }
        return ans;
        
    }
};