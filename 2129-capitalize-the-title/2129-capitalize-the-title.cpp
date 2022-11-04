class Solution {
public:
    string capitalizeTitle(string title) 
    {
        vector<string>v;
        string ans{};
        for(char c:title)
        {
            if(c!=' ')
            {
                ans+=c;
            }
            else
            {
                v.push_back(ans);
                ans="";
            }
        }
       
        v.push_back(ans);
        //  for(auto i:v)
        // {
        //     cout<<i<<" ";
        // }
        string finalans{};
        for(auto i:v)
        {
            if(i.size()>2)
            {
                char  c=toupper(i[0]);
                string str{};
                for(int j=1;j<i.size();j++)
                {
                    str+=tolower(i[j]);
                }
                
                finalans+=c;
                finalans+=(str);
                finalans+=" ";
            }
            else
            {
               string str{};
                for(char c:i)
                {
                    str+=tolower(c);
                }
                finalans+=str;
                finalans+=" ";
            }
        }
        string newans{};
        for(int i{};i<finalans.size()-1;i++)
        {
            newans+=finalans[i];
        }
        return newans;
    }
};