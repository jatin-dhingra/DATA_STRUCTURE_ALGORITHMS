class Solution {
public:
    int strStr(string h, string need) 
    {
        int n=h.size();
        int m=need.size();
        if(m==0)
        {
            return 0;
        }
        int i{},j{};
        string st{};
        while(i<n && j<m)
        {
            if(h[i]==need[j])
            {
                i++;
                j++;
                if(j==m)
                {
                    return i-m;
                }
            }
            else
            {
                i=i+1-j;
                j=0;
            }
        }
        return -1;
        
    }
};