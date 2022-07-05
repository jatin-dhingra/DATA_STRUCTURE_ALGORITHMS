class Solution {
public:
    vector<long long> sumOfThree(long long num) 
    {
        vector<long long>ans;
        if(num%3!=0)
        {
            return ans;
        }
        else{
            long long  dig=num/3;
            long long  left=dig-1;
            long long right=dig+1;
            if((dig+left+right)==num)
            {
                ans.push_back(left);
                ans.push_back(dig);
                ans.push_back(right);
            }
        }
        return ans;
    }
};