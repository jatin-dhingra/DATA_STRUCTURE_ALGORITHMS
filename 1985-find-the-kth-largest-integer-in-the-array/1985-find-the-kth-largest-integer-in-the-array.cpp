
class compare
{
public:
    bool operator() (string &b, string &a) { 
        if (a.size() != b.size()) return a.size() < b.size();
        return  a < b;
    }
    
};

class Solution {
public:
    
    string kthLargestNumber(vector<string>& nums, int k) 
    {
        
         priority_queue<string, vector<string>, compare>h;
        for(string& i:nums)
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