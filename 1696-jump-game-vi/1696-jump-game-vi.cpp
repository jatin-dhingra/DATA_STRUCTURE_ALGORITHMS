class Solution {
public:
     struct mycomp {
        bool operator ()(pair<int, int> p1, pair<int, int> p2) {
            return p1.first < p2.first;
        }
    };
	 int maxResult(vector<int>& nums, int k) {
        if (k == 1) {return accumulate(nums.begin(), nums.end(), 0);}
        if (nums.size() == 1) {return nums[0];}
        if (nums.size() == 2) {return nums[0] + nums[1];}
        if (k >= nums.size() - 1) {
            int sum = nums[0] + nums.back();
            for (int i =  1; i < nums.size() - 1; i++) {
                if (nums[i] > 0) {sum += nums[i];}
            }
            return sum;
        }
		
        priority_queue<pair<int, int>, vector<pair<int, int>>, mycomp> maxheap;
        int n = nums.size();
        int curr = 0;  
        
        maxheap.push({nums[0], 0});
        for (int i = 1; i < n; i++) {
		    
            while (maxheap.top().second < i - k) {
                maxheap.pop();
            }
            curr = nums[i] + maxheap.top().first;
            maxheap.push({curr, i});
        }
        
        return curr;
    }
    
   
};