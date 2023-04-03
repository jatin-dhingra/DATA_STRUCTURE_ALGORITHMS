class Solution {
public:
    int numRescueBoats(vector<int>& p, int limit) 
    {
        sort(p.begin(),p.end());
        int count{},i{},j=p.size()-1;
        while(i<=j)
        {
            int sum=p[i]+p[j];
            if(sum<=limit)
            {
                i++;
                j--;
                count++;
            }
            else
            {
                j--;
                count++;
            }
        }
        return count;
    }
    
};