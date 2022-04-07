class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) 
    {
        int s=0;
        int l=arr.size()-1;
        while(s<l)
        {
            int mid=s+(l-s)/2;
            if(arr[mid]<arr[mid+1])
            {
                s=mid+1;
            }
            else
            {
                l=mid;
            }
        }
        return s;
        
    }
};