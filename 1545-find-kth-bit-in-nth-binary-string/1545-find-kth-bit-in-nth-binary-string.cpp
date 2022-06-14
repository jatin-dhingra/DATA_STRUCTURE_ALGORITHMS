class Solution {
public:
    
    string inv(string s)
    {
        for(int i{};i<s.size();i++)
        {
            if(s[i]=='0')
            {
                s[i]='1';
            }
            else
            {
                s[i]='0';
            }
        }
        string ans=s;
        reverse(ans.begin(),ans.end());
        return ans;
    }
    
    string solve(int n)
    {
        if(n==0)
        {
           return "0";
        }
        string mainn=solve(n-1);
        string invert=inv(mainn);
        return mainn+"1"+invert;
    }
    
    char findKthBit(int n, int k)
    {
        string s{};
      
        return (solve(n)[k-1]);
        
    }
};