class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
        vector<int>first,second;
        n=n*2;
        for(int i{};i<n/2;i++)
        {
            first.push_back(nums[i]);
        }
        for(int i{n/2};i<n;i++)
        {
            second.push_back(nums[i]);
        }
        vector<int>ans;
        int i{},j{};
        // for(int i:first)
        // {
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        // for(int i:second)
        // {
        //     cout<<i<<" ";
        // }
        while(i<n/2)
        {
            ans.push_back(first[i]);
            i++;
            ans.push_back(second[j]);
            j++;
        }
        return ans;
        
    }
};