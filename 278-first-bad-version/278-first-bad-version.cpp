// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) 
    {
        int ans{};
        int s=0;
        int l=n;
        
        while(s<=l)
        {
            int mid=s+(l-s)/2;
            
            if(!isBadVersion(mid))
            {
                s=mid+1;
            }
            else
            {
                l=mid-1;
            }
        }
        return l+1;
        
    }
};