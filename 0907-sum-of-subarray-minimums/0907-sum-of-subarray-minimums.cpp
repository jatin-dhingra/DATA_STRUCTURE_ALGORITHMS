class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) 
    {
        int n=arr.size();
        int mod=1e9+7;
        stack<int> s;
      long long int sum{};
      vector<int> dp(n);
      for (int i{};i<n;i++) 
      {
        while (!s.empty() && arr[s.top()]>=arr[i])
            s.pop();
        if (s.size()) 
        { 
            int prev = s.top();
            dp[i] = dp[prev] + (i - prev)*arr[i];
        } 
        else
        {
            dp[i] = (i+1)*arr[i];
        }

        sum = (sum+dp[i])%mod;
        s.push(i);
      }
      return sum;
        
        
        
        
    }
};