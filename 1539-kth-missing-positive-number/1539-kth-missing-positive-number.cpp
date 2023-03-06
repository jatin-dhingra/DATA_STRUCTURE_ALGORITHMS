class Solution {
public:
    int findKthPositive(vector<int>& arr, int k)
    {
        int n=arr.size();
        vector<int>vec(10001);
        for(int i{};i<n;i++)
        {
            vec[arr[i]]++;
        }
        int ans{};
        
        for(int i{1};i<=10000;i++)
        {
            
            if(!vec[i])
            {
                k--;
                if(k==0)
                {
                    ans=i;
                }
            }
        }
        return ans;
        
    }
};