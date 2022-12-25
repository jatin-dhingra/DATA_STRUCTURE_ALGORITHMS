class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& q) 
    {
        int n=nums.size();
        int m=q.size();
        
        vector<int>ans(m);
        sort(nums.begin(),nums.end());
        
        for(int i{};i<m;i++)
        {
            int sum{};
            int count{};
            for(int j{};j<n;j++)
            {
                sum+=nums[j];
                if(sum<=q[i])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            ans[i]=count;
        }
        return ans;
    }
};