class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h)
    {
        int n=piles.size();
        long long ans{LLONG_MAX};
        int  s{1};
        long long e=*max_element(piles.begin(),piles.end());
        
        while(s<=e)
        {
            long long  count{};
            long long mid=s+(e-s)/2;
            for(int j{};j<n;j++)
            {
                count+=ceil(piles[j]/(mid*1.0));
            }
            long long val{LLONG_MAX};
            if(count<=h)
            {
                e=mid-1;
                val=mid;
            }  
            else
            {
                s=mid+1;
            }
            ans=min(ans,val);
        }
        return (int)ans;
        
    }
};