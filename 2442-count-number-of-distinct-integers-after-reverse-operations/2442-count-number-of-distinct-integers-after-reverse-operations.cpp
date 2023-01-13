class Solution {
public:
    bool ispalin(string &s)
    {
        string k=s;
        reverse(k.begin(),k.end());
        return k==s;
    }
    int countDistinctIntegers(vector<int>& nums) 
    {
        int n=nums.size();
        
        vector<string>st;
        unordered_map<int ,int>m;
        
        for(int i{};i<n;i++)
        {
            st.push_back(to_string(nums[i]));
            m[stoi(st[i])];
        }
        int ans{};
        for(int i{};i<n;i++)
        {
            int val=nums[i];
            string str=st[i];
//             if(val%10==0)
//             {
                
//             }
            
            string rev=str;
            reverse(rev.begin(),rev.end());
            m[stoi(rev)]++;
            
        }
        
        return m.size();
    }
};