class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        int n=nums.size();
        int allsum=n*(n+1)/2;
        int currsum=accumulate(nums.begin(),nums.end(),0);
        //cout<<allsum<<" "<<currsum<<endl;
        int rem=allsum-currsum;
        map<int,int>m;
        for(int i:nums)
        {
            m[i]++;
        }
        vector<int>v;
        int ans{};
        for(auto i:m)
        {
            if(i.second==2)
            {
                ans=i.first;
                break;
            }
        }
        v.push_back(ans);
        v.push_back(ans+rem);
        return v;
        
    }
};