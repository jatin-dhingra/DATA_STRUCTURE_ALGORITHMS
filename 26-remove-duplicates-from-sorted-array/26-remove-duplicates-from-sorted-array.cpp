class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        set<int>st;
        for(int i:nums)
        {
            st.insert(i);
            
        }
        int j{};
        for(int i:st)
        {
            nums[j]=i;
            j++;
        }
        return st.size();
    }
};