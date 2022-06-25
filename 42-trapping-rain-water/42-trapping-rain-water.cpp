class Solution {
public:
    int trap(vector<int>& height)
    {
        
        int n=height.size();
        vector<int>maxleft(n);
        vector<int>maxright(n);
        maxleft[0]=height[0];
        maxright[n-1]=height[n-1];
        for(int i{1};i<n;i++)
        {
            maxleft[i]=max(maxleft[i-1],height[i]);
        }
        
        for(int i=n-2;i>=0;i--)
        {
            maxright[i]=max(maxright[i+1],height[i]);
        }
        
        int ans{};
        // for(int i:maxleft)
        // {
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        // for(int i:maxright)
        // {
        //     cout<<i<<" ";
        // }
        for(int i{};i<n;i++)
        {
            ans+=min(maxleft[i],maxright[i])-height[i];
        }
        return ans;
    }
};