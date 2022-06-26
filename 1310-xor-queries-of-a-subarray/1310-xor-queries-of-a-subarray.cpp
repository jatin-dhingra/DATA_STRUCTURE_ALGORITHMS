class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) 
    {
        vector<int>ans;
        int n=arr.size();
        vector<int>pre(n);
        pre[0]=arr[0];
        for(int i{1};i<n;i++)
        {
            pre[i]=pre[i-1]^arr[i];
        }
        for(auto i:queries)
        {
            int left=i[0];
            int right=i[1];
            if(left==0)
            {
                ans.push_back(pre[right]);
            }
           else
           {
               ans.push_back(pre[right]^pre[left-1]);
           }
        }
        return ans;
        
    }
};