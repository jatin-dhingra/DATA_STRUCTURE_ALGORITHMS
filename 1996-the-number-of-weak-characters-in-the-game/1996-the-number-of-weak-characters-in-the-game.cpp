class Solution {
public:
    static bool cmp(vector<int>&a,vector<int>&b)
    {
        if(a[0]==b[0])
        {
            return a[1]<b[1];
        }
        return a[0]>b[0];
    }
    int numberOfWeakCharacters(vector<vector<int>>& v) 
    {
        int count{};
        int n=v.size();
        sort(v.begin(),v.end(),cmp);
       
        stack<pair<int,int>>st;
        st.push({v[0][0],v[0][1]});
        for(int i{1};i<n;i++)
        {
            
            while(!st.empty() && st.top().second<=v[i][1])
            {
                st.pop();
            }
            if(!st.empty())
            {
                count++;
            }
            
            st.push({v[i][0],v[i][1]});
        }
        return count;
        
    }
};