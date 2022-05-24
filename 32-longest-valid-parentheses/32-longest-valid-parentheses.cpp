class Solution {
public:
    int longestValidParentheses(string s)
    {
        int left{},right{};
        
        int ans{};
        for(int i{};i<s.size();i++)
        {
            if(s[i]=='(')
            {
                left++;
            }
            else
            {
                right++;
            }
            if(left==right)
            {
                int len=left+right;
                ans=max(ans,len);
            }
            else if(left<right)
            {
                left=0;
                right=0;
            }
        }
        
        left=0;
        right=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='(')
            {
                left++;
            }
            else
            {
                right++;
            }
            if(left==right)
            {
                int len=left+right;
                ans=max(ans,len);
            }
            else if(left>right)
            {
                left=0;
                right=0;
            }
        }
        return ans;
    }
};