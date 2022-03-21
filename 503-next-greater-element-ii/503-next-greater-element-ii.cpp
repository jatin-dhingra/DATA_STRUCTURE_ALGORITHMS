class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) 
    {
        stack<int>st;
        
        int n=arr.size();
        vector<int>v(n);
        for(int i{2*(n-1)};i>=0;i--)
        {
            if(st.empty())
            {
                v.push_back(-1);
            }
            else if(!st.empty() && st.top()>arr[i%n])
            {
                v.push_back(st.top());
                
            }
            else if(!st.empty() && st.top()<=arr[i%n])
            {
                while(!st.empty() && st.top()<=arr[i%n])
                {
                    st.pop();
                }
                if(st.empty())
                {
                    v.push_back(-1);
                }
                else
                {
                    v.push_back(st.top());
                }
            }
            st.push(arr[i%n]);
        }
        reverse(v.begin(),v.end());
        vector<int>mainans;
        for(int i{};i<n;i++)
        {
            mainans.push_back(v[i]);
        }
        return mainans;
        
    }
};