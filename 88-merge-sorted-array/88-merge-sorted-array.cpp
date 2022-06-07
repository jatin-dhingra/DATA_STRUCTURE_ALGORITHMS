class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        int j=m;
        int k{};
        for(int i{j};i<nums1.size();i++)
        {
            nums1[i]=nums2[k++];
        }
        sort(nums1.begin(),nums1.end());
       
        
    }
};