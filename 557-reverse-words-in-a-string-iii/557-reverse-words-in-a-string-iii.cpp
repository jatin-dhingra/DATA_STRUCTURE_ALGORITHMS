class Solution {
public:
    string reverseWords(string s) 
    {
        stack<char>st;
        int n=s.size();
        string ans{};
        for(int i{};i<n;i++)
        {
            if(s[i]!=' ')
            {
                st.push(s[i]);
            }
            else
            {
                while(!st.empty())
                {
                    ans.push_back(st.top());
                    st.pop();
                }
                ans.push_back(' ');
            }
        }
        string k{};
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]==' ')
            {
                break;
            }
            else
            {
                k+=s[i];
                st.push(s[i]);
            }
        }
        for(int i{};i<k.size();i++)
        {
            ans.push_back(k[i]);
        }
        
        return ans;
        // string val{};
        // for(int i{};i<ans.size()-1;i++){
        //     val.push_back(ans[i]);
        // }
        // return val;
        
    }
};