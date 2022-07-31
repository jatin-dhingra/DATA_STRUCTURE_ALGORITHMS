class NumArray {
public:
    vector<int>ans;
    int sum{};
    NumArray(vector<int>& nums) 
    {
        int n=nums.size();
        if(n==0)
        {
            return;
        }
        ans=nums;
        sum = accumulate(ans.begin(),ans.end(),0);
        
    }
    
    void update(int index, int val) {
        sum-=ans[index];
        ans[index] = val;
        sum+=ans[index];
    }
    
    int sumRange(int left, int right) 
    {
        int anss=sum ;
        for(int i = 0; i<left;i++){
            anss-=ans[i];
        } 
        for(int i = right+1; i<ans.size();i++){
            anss-=ans[i];
        } 
        return anss;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */