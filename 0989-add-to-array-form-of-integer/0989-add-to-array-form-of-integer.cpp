class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k)
    {
        stack<int>st;
        int ind=num.size()-1;
        vector<int>ans;
        while(ind>=0|| k)
        {
            if(ind>=0)
            {
                k+=num[ind];
            }
            st.push(k%10);
            k/=10;
            ind--;
        }
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
        
        
    }
};