class Solution {
public:
    string frequencySort(string s) 
    {
        int n=s.size();
        map<char,int>m;
        vector<pair<int,char>>v;
        for(int i{};i<n;i++)
        {
            m[s[i]]++;
        }
        string ans{};
        for(auto i:m)
        {
            v.push_back({i.second,i.first});
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(auto i:v)
        {
            if(i.first==1)
            {
                ans+=i.second;
            }
            else{
                while(i.first)
            {
                ans+=i.second;
                i.first--;
            }
            }
        }
        return ans;
        
    }
};