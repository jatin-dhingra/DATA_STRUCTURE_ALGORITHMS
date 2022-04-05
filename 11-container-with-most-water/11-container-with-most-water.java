class Solution {
    public int maxArea(int[] height)
    {
        int s=0;
        int l=height.length-1;
        int ans=0,maxans=0;
        while(s<l)
        {
            int len=l-s;
            int hei=Math.min(height[s],height[l]);
            if(height[s]>height[l])
            {
                l--;
            }
            else
            {
                s++;
            }
            maxans=Math.max(maxans,hei*len);
            ans=Math.max(ans,maxans);
        }
        return ans;
    }
}