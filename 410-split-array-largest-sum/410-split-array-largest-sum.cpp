class Solution {
public:
	int countArr(vector<int>& nums, int cap)
	{
		long cur=0;
		long sum=0;
		for(int i=0;i<nums.size();i++)
		{
			if(cur+nums[i]>cap)
			{
				cur=nums[i];
				sum++;
			}
			else
			{
				cur+=nums[i];
			}

		}
		return sum+1;
	}
	int splitArray(vector<int>& nums, int m) {
		long left=0;
		long right=0;
		for(int i=0;i<nums.size();i++)
		{
			if(nums[i]>left)
			{
				left=nums[i];
			}
			right+=nums[i];
		}

		while(left+1<right)
		{
			int mid=left+(right-left)/2;
			if(countArr(nums,mid)<=m)
			{
				right=mid;
			}
			else
			{
				left=mid;
			}
		}


		if(countArr(nums,left)<=m) return left;
		return right;
	}
};