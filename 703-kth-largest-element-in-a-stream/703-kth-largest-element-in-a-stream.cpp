class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>>p;
    int len{};
    KthLargest(int k, vector<int>& nums) 
    {
        len=k;
        
        for(auto i:nums)
        {
            p.push(i);
            if(p.size()>k)
            {
                p.pop();
            }
        }
        
        
    }
    
    int add(int val) 
    {
        p.push(val);
        if(p.size()>len)
        {
            p.pop();
        }
        return p.top();
        
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */