class Solution {
public:
    string sortSentence(string s) 
    {
        vector<pair<int,string>>vp;
        
        int n=s.size();
        string vs{};
        for(auto i:s)
        {
            if((i>='a' && i<='z') || (i>='A' && i<='Z'))
            {
                vs+=i;
            }
            else if(i>='1' && i<='9')
            {
                vp.push_back({i-'0',vs});
            }
            else
            {
                vs="";
            }
        }
        sort(vp.begin(),vp.end());
        string ans{};
        for(auto i:vp)
        {
            ans+=(i.second);
            ans+=' ';
        }
        ans.pop_back();
        return ans;
    }
};