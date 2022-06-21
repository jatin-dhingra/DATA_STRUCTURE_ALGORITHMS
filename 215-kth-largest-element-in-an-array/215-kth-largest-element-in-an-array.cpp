class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) 
    {
        // largest create  the min heap 
        
        priority_queue<int,vector<int>,greater<int>>pq;
        
        int n=nums.size();
        for(int i{};i<n;i++)
        {
            pq.push(nums[i]);
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        return pq.top();
    }
};