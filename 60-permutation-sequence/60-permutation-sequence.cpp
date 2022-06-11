class Solution {
public:
    string getPermutation(int n, int k) 
    {
        int f{1};
        vector<int>nums;
        for(int i{1};i<n;i++)
        {
            f*=i;
            nums.push_back(i);
        }
        nums.push_back(n);
        string ans{};
        
        k--;
        while(1)
        {
            ans+=to_string(nums[k/f]);
            nums.erase(nums.begin()+k/f);
            if(nums.size()==0)
            {
                break;
            }
            k=k%f;
            f/=nums.size();
        }
        return ans;
        
    }
};