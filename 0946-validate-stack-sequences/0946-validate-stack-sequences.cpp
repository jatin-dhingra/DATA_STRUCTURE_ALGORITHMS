class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) 
    {
        int n=pushed.size();
        stack<int>st;
        int j{};
        
        for(int i{};i<n;i++)
        {
            st.push(pushed[i]);
            
            while(!st.empty() &&st.top()==popped[j])
            {
                st.pop();
                j++;
            }
            
        }
        return st.empty();
        
    }
};