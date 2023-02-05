class Solution {
public:
    vector<int> vowelStrings(vector<string>& w, vector<vector<int>>& q) 
    {
        char vow[]={'a', 'e', 'i', 'o','u'};
        int n=w.size();
        int count{};
        vector<int>pre;
        int ind{};
        for(string str:w)
        {
            string s=str;
            bool start{},end{};
            for(int i{};i<5;i++)
            {
                if(s[0]==vow[i])
                {
                    start=1;
                    break;
                }
            }
            for(int i{};i<5;i++)
            {
                if(s[str.size()-1]==vow[i])
                {
                    end=1;
                    break;
                }
            }
            if(start && end)
            {
                count++;
                
            }
            pre.push_back(count);
            
        }
        for(int i{};i<n;i++)
        {
            cout<<pre[i]<<" ";
        }
        cout<<endl;
        vector<int>ans;
    
        for(auto i:q)
        {
            int s=i[0];
            int e=i[1];
            if(s>0)
            {
                ans.push_back(pre[e]-pre[s-1]);
            }
            else
                ans.push_back(pre[e]);
        }
        
        return ans;
        
    }
};