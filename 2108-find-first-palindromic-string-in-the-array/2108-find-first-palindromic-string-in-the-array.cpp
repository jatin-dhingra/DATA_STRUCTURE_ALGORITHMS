class Solution {
public:
    bool palin(string x)
    {
        for(int i{};i<x.size()/2;i++)
        {
            if(x[i]!=x[x.size()-i-1])
            {
                return false;
            }
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) 
    {
        string ans{};
        for(auto i:words)
        {
            if(palin(i))
            {
                ans=i;
                break;
            }
        }
        return ans;
        
    }
};