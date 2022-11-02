class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& d) 
    {
        unordered_map<int,int>m;
        int n=d.size();
        for(int i{};i<n;i++)
        {
            for(int j{};j<n;j++)
            {
                for(int k{};k<n;k++)
                {
                    int num{};
                    
                    if(i!=j && j!=k && i!=k)
                    {
                         num=(d[i]*100)+(d[j]*10)+d[k];
                    }
                    if(m.find(num)!=m.end())
                    {
                        continue;
                    }
                    if(m.find(num)==m.end() && num%2==0 && num>99 && num<1000)
                    {
                        m[num]=1;
                    }
                }
            }
        }
        vector<int>ans;
        for(auto i:m)
        {
            ans.push_back(i.first);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};