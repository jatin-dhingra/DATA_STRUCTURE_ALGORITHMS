class Solution {
public:
    int numRescueBoats(vector<int>& v, int l)
    {
        sort(v.begin(),v.end());
        int s=0;
        int e=v.size()-1;
        int count{};
        while(s<=e)
        {
            count++;
            if(v[s]+v[e]<=l)
            {
                s++;
            }
            e--;
        }
        return count;
        
    }
};