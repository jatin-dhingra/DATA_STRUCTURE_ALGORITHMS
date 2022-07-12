class Solution {
public:
    bool solve(vector<int>&nums,vector<int>&vec,int sum, int ind,int val,int k)
    {
         if(k==0)
         {
             return true;
         }
        if(sum>val)
        {
            return false;
        }
        if(sum==val){
            return solve(nums,vec,0,0,val,k-1);
        }
        for(int i=ind;i<nums.size();i++){
            if(vec[i]){
                continue;
            }  
            vec[i] = true;
            if(solve(nums,vec,sum+nums[i],i+1,val,k))
            {
                return true;
            }
            vec[i] = false;
            
        }
        return false;
    }
    
    bool makesquare(vector<int>& nums) 
    {
        int n=nums.size();
        
        int summ=accumulate(nums.begin(),nums.end(),0);
        
        if(summ%4!=0)
        {
            return false;
        }
        int val=summ/4;
        int k=4;
        vector<int>vec(n,false);
        sort(nums.begin(),nums.end(),greater<int>());
        return solve(nums,vec,0,0,val,k);
        
    }
};