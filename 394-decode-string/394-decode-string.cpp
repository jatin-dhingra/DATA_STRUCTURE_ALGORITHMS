class Solution {
public:
    string decodeString(string s) 
    {
        string ans{};
        int n=s.size();
     
        stack<char>st;
        for(int i{};i<n;i++)
        {
        
            if(s[i]==']')
            {
                 string temp{};
                string temp2{};
                while( st.top()!='[')
                {
                    temp=st.top()+temp;
                    st.pop();
                }
                st.pop();
                
                while(!st.empty() && isdigit(st.top()))
                {
                    temp2=st.top()+temp2;
                    st.pop();
                }
                int val=stoi(temp2);
                while(val--)
                {
                    for(int x{};x<temp.size();x++)
                    {
                        st.push(temp[x]);
                    }
                }
                    
            }
            else
            {
                st.push(s[i]);
            }
            
        }
        
        while(!st.empty())
        {
            ans=st.top()+ans;
            st.pop();
        }
       
        return ans;
        
    }
};