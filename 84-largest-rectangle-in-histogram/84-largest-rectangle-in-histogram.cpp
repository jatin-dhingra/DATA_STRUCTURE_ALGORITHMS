class Solution {
public:
    
    vector<int>NSL(vector<int>&nsl,vector<int>&heights)
    {
        stack<pair<int,int>>st;
        int ext{-1};
        int n=heights.size();
        
        for(int i{};i<n;i++)
        {
            if(st.empty())
            {
                nsl.push_back(ext);
            }
            else if(!st.empty() && st.top().first<heights[i])
            {
                nsl.push_back(st.top().second);
            }
            else if(!st.empty() && st.top().first>=heights[i])
            {
                while(!st.empty() && st.top().first>=heights[i])
                {
                    st.pop();
                }
                if(st.empty())
                {
                    nsl.push_back(ext);
                }
                else
                {
                    nsl.push_back(st.top().second);
                }
            }
            st.push({heights[i],i});
        }
        return nsl;
    }
    
    vector<int>NSR(vector<int>&nsr,vector<int>&heights)
    {
        stack<pair<int,int>>st;
        
        int n=heights.size();
        int ext{n};
        
        for(int i=n-1;i>=0;i--)
        {
            if(st.empty())
            {
                nsr.push_back(ext);
            }
            else if(!st.empty() && st.top().first<heights[i])
            {
                nsr.push_back(st.top().second);
            }
            else if(!st.empty() && st.top().first>=heights[i])
            {
                while(!st.empty() && st.top().first>=heights[i])
                {
                    st.pop();
                }
                if(st.empty())
                {
                    nsr.push_back(ext);
                }
                else
                {
                    nsr.push_back(st.top().second);
                }
            }
            st.push({heights[i],i});
        }
        reverse(nsr.begin(),nsr.end());
        return nsr;
    }
    
    int largestRectangleArea(vector<int>& heights) 
    {
        vector<int>nsl,nsr,ans;
        int n=heights.size();
        
        
        NSL(nsl,heights);
        NSR(nsr,heights);
        // for(auto i:nsl)
        // {
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        // for(auto i:nsr)
        // {
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        for(int i{};i<n;i++)
        {
            ans.push_back(nsr[i]-nsl[i]-1);
        }
        vector<int>v;
        for(int i{};i<n;i++)
        {
            v.push_back(ans[i]*heights[i]);
        }
        int val=(*max_element(v.begin(),v.end()));
        return val;
        
    }
};