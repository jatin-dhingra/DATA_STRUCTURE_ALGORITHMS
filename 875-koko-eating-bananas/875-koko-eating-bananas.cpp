class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        
        int n=piles.size();
        long long l=*max_element(piles.begin(),piles.end());
        
        vector<long long>nums;
        int j{};
        // for(int i{1};i<=l;i++)
        // {
        //     nums.push_back(i);
        // }
        long long ans{LLONG_MAX};
        int s=1;
        while(s<=l)
        {
            int mid=s+(l-s)/2;
            long long count{};
            for(int i{};i<n;i++)
            {
                count+=ceil(piles[i]/(mid*1.0));
            }
            // cout<<mid<<endl;
            long long ansval{LLONG_MAX};
            if(count<=h)
            {
                l=mid-1;
                ansval=mid;
            }
            else
            {
                s=mid+1;
            }
            ans=min(ans,ansval);
        }
        return ans;
        
    }
};