class Solution {
public:
    string simplifyPath(string path) 
    {
        stack<string>s;
        int n=path.size();
        for(int i{};i<n;i++)
        {
            string  temp{};
            if(path[i]=='/')
            {
                continue;
            }
            while(i<n && path[i]!='/')
            {
                temp+=path[i];
                ++i;
            }
            if(temp==".")
            {
                continue;
            }
            else if(temp=="..")
            {
                if(!s.empty())
                {
                    s.pop();
                }
            }
            else
            {
                s.push(temp);
            }
        }
        string ans{};
        while(!s.empty())
        {
            ans="/"+s.top()+ans;
            s.pop();
            
        }
        if(ans.size()==0)
        {
            return "/";
        }
        
        return ans;
    }
};