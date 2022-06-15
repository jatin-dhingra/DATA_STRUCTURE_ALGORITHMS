class Solution {
public:
    
    static bool comp(const string &a,const string &b)
    {
        return a.size()<b.size();
    }
    
    int longestStrChain(vector<string>& words) 
    {
        sort(words.begin(),words.end(),comp);
        map<string,int>m;
        int n=words.size();
        int ans=1;
        for(int i{};i<n;i++)
        {
            int x=1;
            for(int j{};j<words[i].size();j++)
            {
                string k=words[i];
                k.erase(j,1);
                if(m.find(k)!=m.end())
                {
                    x=max(x,m[k]+1);
                }
            }
            m[words[i]]=x;
            ans=max(ans,x);
        }
        
        
        return ans;
    }
};