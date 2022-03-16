class Solution {
public:
    bool validateStackSequences(vector<int>& pushh, vector<int>& popp) 
    {
        stack<int>st;
        int j=0;
        int n=popp.size();
        for(auto i:pushh)
        {
            st.push(i);
            while( !st.empty()&& j<n &&st.top()==popp[j])
            {
                st.pop();
                j++;
            }
        }
        return j==n;
        
    }
};