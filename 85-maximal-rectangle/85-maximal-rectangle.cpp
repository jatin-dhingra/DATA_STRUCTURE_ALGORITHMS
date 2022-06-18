class Solution {
public:
    
    vector<int>NSL(vector<int>&nsl,vector<int>&v,int n)
    {
        stack<pair<int,int>>st;
        for(int i{};i<n;i++)
        {
            if(st.empty())
            {
                nsl.push_back(-1);
            }
            else if(!st.empty() && st.top().first<v[i])
            {
                nsl.push_back(st.top().second);
            }
            else if(!st.empty() && st.top().first>=v[i])
            {
                while(!st.empty() && st.top().first>=v[i])
                {
                    st.pop();
                }
                if(st.empty())
                {
                    nsl.push_back(-1);
                }
                else
                {
                    nsl.push_back(st.top().second);
                }
            }
            st.push({v[i],i});
        }
        return nsl;
    }
    
    vector<int>NSR(vector<int>&nsr,vector<int>&v,int n)
    {
        stack<pair<int,int>>st;
        int ext=n;
        
        for(int i=n-1;i>=0;i--)
        {
            if(st.empty())
            {
                nsr.push_back(n);
            }
            else if(!st.empty()&& st.top().first<v[i])
            {
                nsr.push_back(st.top().second);
            }
            else if(!st.empty() && st.top().first>=v[i])
            {
                while(!st.empty() && st.top().first>=v[i])
                {
                    st.pop();
                }
                if(st.empty())
                {
                    nsr.push_back(n);
                }
                else
                {
                    nsr.push_back(st.top().second);
                }
            }
            st.push({v[i],i});      
        }
        reverse(nsr.begin(),nsr.end());
        return nsr;
    }
    
    int MAH(vector<int>&v)
    {
        int n=v.size();
        vector<int>nsl,nsr,ans;
        NSL(nsl,v,n);
        NSR(nsr,v,n);
        for(int i{};i<n;i++){
            ans.push_back(nsr[i]-nsl[i]-1);
        }
        vector<int>maxarea;
        for(int i{};i<n;i++){
            maxarea.push_back(v[i]*ans[i]);
        }
        int finalans=*max_element(maxarea.begin(),maxarea.end());
        return finalans;
        
        
    }
    
    int maximalRectangle(vector<vector<char>>& matrix) 
    {
        vector<int>v;
        int m=matrix.size();
        int n=matrix[0].size();
     
        for(int i{};i<n;i++)
        {
            v.push_back(matrix[0][i]-'0');
        }
        
        int ansmain=MAH(v);
        cout<<ansmain<<endl;
        
        for(int i{1};i<m;i++)
        {
            for(int j{};j<n;j++)
            {
                if(matrix[i][j]=='0')
                {
                    v[j]=0;
                }
                else
                {
                    v[j]+=(matrix[i][j]-'0');
                }
            }
            ansmain=max(ansmain,MAH(v));
        }
        return ansmain;
        
        
    }
};