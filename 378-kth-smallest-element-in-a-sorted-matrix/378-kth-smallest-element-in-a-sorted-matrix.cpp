class Solution {
public:
    int kthSmallest(vector<vector<int>>& mat, int k) 
    {
        vector<int>v;
        priority_queue<int>p;
        for(auto i:mat)
        {
            for(auto j:i)
            {
                p.push(j);
                if(p.size()>k)
                {
                    p.pop();
                }
                
            }
        }
       
        return p.top();
        
    }
};