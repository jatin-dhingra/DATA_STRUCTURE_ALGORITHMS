class Solution {
public:
    
    int max(int a,int b)
    {
        if(a>b)
        {
            return a;
        }
        else
        {
            return b;
        }
    }
    vector<int> partitionLabels(string s) 
    {
        vector<int>v(26);
        vector<int>ans;
        for(int i{};i<s.size();i++)
        {
            v[s[i]-'a']=i;
            
        }
        int st{},end{};
        for(int i{};i<s.size();i++)
        {
            end=max(end,v[s[i]-'a']);
            if(i==end)
            {
                ans.push_back(end-st+1);
                st=end+1;
            }
        }
        return ans;
        
       
        
    }
};