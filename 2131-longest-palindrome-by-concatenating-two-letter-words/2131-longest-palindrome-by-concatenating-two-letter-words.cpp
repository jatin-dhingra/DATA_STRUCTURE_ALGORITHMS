class Solution {
public:
    int longestPalindrome(vector<string>& words) 
    {
        int ans{};
        map<string,int>m;
        int n=words.size();
        for(auto i:words)
        {
            m[i]++;
            
        }
        // for(auto i:m)
        // {
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        int equal{};
        int count{};
        
        for(auto i:words)
        {
            bool check{};
            
            string k=i;
            reverse(k.begin(),k.end());
            if(k==i && m[k]==1)
            {
                equal=1;
                continue;
            }
            
           // cout<<i.first<<" "<<k<<endl;
            if(m[k])
            {
                count+=2;
                m[i]--;
                m[k]--;
                if(!m[i] || !m[k])
                {
                    m[k]=0;
                    m[i]=0;
                }
               
            }
        }
        count*=2;
        
        return count+(equal*2);
        
    }
};