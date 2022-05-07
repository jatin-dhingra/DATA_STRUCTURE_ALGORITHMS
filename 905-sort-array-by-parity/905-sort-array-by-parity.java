class Solution {
    
    public void swap(int a,int b)
    {
        a=a-b;
        b=a+b;
        a=b-a;
    }
    public int[] sortArrayByParity(int[] nums) 
    {
        int i=0;
        int j=nums.length-1;
        while(i<j)
        {
            if(nums[i]%2==1 && nums[j]%2==0)
            {
                
                nums[i]=nums[i]-nums[j];
                nums[j]=nums[j]+nums[i];
                nums[i]=nums[j]-nums[i];
                i++;
                j--;
            }
            else if(nums[i]%2==0)
            {
                i++;
            }
            else if(nums[j]%2==1)
            {
                j--;
            }
        }
        return nums;
        
    }
}