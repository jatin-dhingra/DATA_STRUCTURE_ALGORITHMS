class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) 
    {
        map<int,set<int>>m;
        vector<int>ans;
        for(int i{};i<nums1.size();i++)
        {
            m[nums1[i]].insert(1);
        }
        for(int i{};i<nums2.size();i++)
        {
            m[nums2[i]].insert(2);
        }
        for(int i{};i<nums3.size();i++)
        {
            m[nums3[i]].insert(3);
        }
        
        for(auto i:m)
        {
            if(i.second.size()>=2)
            {
                ans.push_back(i.first);
            }
        }
        return ans;
        
    }
};