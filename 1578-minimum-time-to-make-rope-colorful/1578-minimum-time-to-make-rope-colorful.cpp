class Solution {
public:
    int minCost(string s, vector<int>& v) 
    {
        int n=s.size();
        stack<pair<char,int>>st;
        int ans{};
        st.push({s[0],v[0]});
        if(n==1)
        {
            return 0;
        }
        for(int i{1};i<n;i++)
        {
            if(st.size()>0 && st.top().first==s[i])
            {
                if(st.top().second<v[i])
                {
                    ans+=st.top().second;
                    st.pop();
                    st.push({s[i],v[i]});
                }
                else
                {
                    ans+=v[i];
                }
            }
            else{
                st.push({s[i],v[i]});
            }
            // st.push(s[i]);
            // if(st.top()==s[i+1])
            // {
            //     ans+=min(v[i],v[i+1]);
            //     st.pop();
            //     st.push(v[i+1]);
            //     //i++;
            // }
        }
        return ans;
        
    }
};