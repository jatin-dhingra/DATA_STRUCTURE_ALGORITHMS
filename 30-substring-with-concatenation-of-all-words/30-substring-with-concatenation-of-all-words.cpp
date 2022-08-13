class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) 
    {
        unordered_map<string,int>mp;
       // int count{};
        vector<int>ans;
        for(auto i:words)
        {
            mp[i]++;
        }
        
        int n=s.size();
        int wordlen=words.size();
        int m=words[0].size();
        int totalen=wordlen*m;
        
        if(n<totalen)
        {
            return ans;
        }
        
    
        
        for(int i{};i<=n-totalen;i++)
        {
            unordered_map<string,int>mp2=mp;
            int inc{};
            for(inc=0;inc<n;inc++)
            {
                string str=s.substr(i+inc*m,m);
                if(mp2[str]==0)
                {
                    break;
                }
                else
                {
                    mp2[str]--;
                }
            }

            if(inc==wordlen)
            {
                ans.push_back(i);
            }
        }
      
        return ans;
    }
};