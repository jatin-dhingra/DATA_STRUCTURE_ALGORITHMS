class Solution {
public:
    int trap(vector<int>& height) 
    {
        int n=height.size();
        vector<int>start(n);
        vector<int>end(n);
        start[0]=height[0];
        end[n-1]=height[n-1];
        
        for(int i{1};i<n;i++)
        {
            start[i]=max(start[i-1],height[i]);
        }
        for(int i=n-2;i>=0;i--)
        {
            end[i]=max(end[i+1],height[i]);
        }
        
        int sum{};
        for(int i{};i<n;i++)
        {
            sum+=min(start[i],end[i])-height[i];
        }
        return sum;
    }
};