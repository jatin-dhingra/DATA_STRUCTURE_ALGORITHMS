class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) 
    {
        priority_queue<int,vector<int>,greater<int>>h;
        for(auto i:nums)
        {
            h.push(i);
            if(h.size()>k)
            {
                h.pop();
            }
            
        }
        return h.top();
        
    }
};