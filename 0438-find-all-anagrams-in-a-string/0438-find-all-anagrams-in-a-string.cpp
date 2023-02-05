class Solution {
public:
    vector<int> findAnagrams(string s, string p) 
    {
        int n=s.size();
        int m=p.size();
        vector<int>ans;
        map<char,int>sfreq,pfreq;
        for(char c:p)
        {
            pfreq[c]++;
        }
        for(int i{};i<m;i++)
        {
            sfreq[s[i]]++;
        }
        int start{},end{m};
        while(start<n-m+1)
        {
            
            if(sfreq==pfreq)
            {
                ans.push_back(start);
            }
            // for(auto i:sfreq)
            // {
            //     cout<<i.first<<" "<<i.second<<endl;
            // }
           // cout<<s[start]<<endl;
            sfreq[s[end]]++;
            sfreq[s[start]]--;
            start++;
            end++;
            for(auto i:sfreq)
            {
                if(i.second==0)
                {
                    sfreq.erase(i.first);
                }
            }
        }
      
        return ans;
        
    }
};