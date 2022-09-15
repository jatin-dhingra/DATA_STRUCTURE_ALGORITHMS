class Solution {
public:
    vector<int> findOriginalArray(vector<int>& v) 
    {
        vector<int>ans;
        vector<int>emp;
        sort(v.begin(),v.end());
        int n=v.size();
        map<int,int>m;
        
        for(int i{};i<n;i++)
        {
            m[v[i]]++;
        }
        for(int i{};i<n;i++)
        {
            if(m[v[i]]==0)
            {
                continue;
            }
            if(m[v[i]*2]==0)
            {
                return emp;
            }
            ans.push_back(v[i]);
            m[v[i]]--;
            m[v[i]*2]--;
           
        }
        
        return ans.size()!=v.size()/2?emp:ans;
        //return ans;
        
    }
};