class Solution {
public:
    int findPeakElement(vector<int>& arr)
    {
        int n=arr.size();
        if(n==1)
        {
            return 0;
        }
        int s=0;
        int e=n-1;
        int ans{};
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(mid>0 && mid<n-1)
            {
                if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
                {
                    ans=mid;
                    break;
                }
                else if(arr[mid-1]>arr[mid])
                {
                    e=mid-1;
                }
                else if(arr[mid+1]>arr[mid])
                {
                    s=mid+1;
                }
            }
            if(mid==0)
            {
                if(arr[0]>arr[1])
                {
                    return 0;
                }
                else
                {
                    return 1;
                }
            }
            else if(mid==n-1)
            {
                if(arr[n-1]>arr[n-2])
                {
                    return n-1;
                }
                else
                {
                    return n-2;
                }
            }
        }
        return ans;
        
    }
};