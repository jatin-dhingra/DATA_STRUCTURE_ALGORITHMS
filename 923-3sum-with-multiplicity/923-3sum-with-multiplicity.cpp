class Solution {
public:
    int threeSumMulti(vector<int>& nums, int target)
    {
       int n = nums.size();
        int c = 0;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                c+=(m[target-nums[i]-nums[j]]);
            }
            m[nums[i]]++;
            c%=(1000000007);
        }
        return (c%1000000007);
    }
};