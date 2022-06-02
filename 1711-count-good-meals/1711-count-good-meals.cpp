class Solution {
public:
    int countPairs(vector<int>& del)
    {
        int n=del.size();
        unordered_map<int,int>mp;
        sort(del.begin(),del.end());
        int mod=1e9+7;
        int ans{};
        for(auto i:del)
        {
            for(int j{};j<=21;j++)
            {
                int power=pow(2,j);
                int left=power-i;
                if(left>i)
                {
                    break;
                }
                else
                {
                    ans+=mp[left];
                    ans%=mod;
                }
            }
            mp[i]++;
        }
        return ans;
    }
};