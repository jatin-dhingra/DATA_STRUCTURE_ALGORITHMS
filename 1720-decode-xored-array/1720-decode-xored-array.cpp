class Solution {
public:
    vector<int> decode(vector<int>& e, int first) 
    {
        int n=e.size();
        vector<int> v;
        v.push_back(first);
        for (auto a: e)
        {
             v.push_back(first^=a);
        } 
        return v;
    
        
    }
};