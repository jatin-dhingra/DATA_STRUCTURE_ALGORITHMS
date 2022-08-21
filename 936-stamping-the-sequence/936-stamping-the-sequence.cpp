class Solution {
public:
    bool canReplace(string& t, string& s, int i)
    {
        for(int j = 0; j < s.size(); j++)
        {
            if(t[i+j]!=s[j] && t[i+j] != '?') 
                return false;
        }
        return true;
    }
    
    int replace(string& t, int i, int n, int count)
    {
        for(int j = 0; j < n; j++)
        {
            if(t[i+j] != '?'){
                t[i+j] = '?';
                count++;
            }
        }
        return count;
    }
    
    vector<int> movesToStamp(string stamp, string target) 
    {
        vector<int>v;
        int cnt = 0;
        int ind = target.size();
        int end = stamp.size();
        vector<bool>vis(ind,false);
        while(cnt != ind)
        {
            bool flag = false;
            for(int i = 0; i <= ind-end; i++)
            {
                if(!vis[i] && canReplace(target, stamp, i))
                {
                    vis[i]= true;
                    flag = true;
                    cnt = replace(target, i, end, cnt);
                    v.push_back(i);    
                    if(cnt == ind) 
                        break;
                }
            }
            if(!flag) 
                return {};
        }
        reverse(v.begin(), v.end());
        return v;
    }
};