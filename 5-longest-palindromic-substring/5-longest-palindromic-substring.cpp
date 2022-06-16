class Solution {
public:
    string longestPalindrome(string s) 
    {
        string ans{};
        if(s.size()<1)
        {
            return ans;
        }
        int st{},ed{};
        
        for(int i{};i<s.size();i++)
        {
            int oddlenght=check(s,i,i);
            int evenlength=check(s,i,i+1);
            int maxlen=max(oddlenght,evenlength);
            if(maxlen>ed-st)
            {
                st=i-(maxlen-1)/2;
                ed=i+(maxlen)/2;
            }
        }
        return s.substr(st,ed-st+1);
    }
    
    int check(string s,int a, int b)
    {
       if(s.size()==0 || a>b)
       {
           return 0;
       }
        
        while(a>=0 && b<s.size()&& s[a]==s[b])
        {
            a--;
            b++;
        }
        return b-a-1;
    }
    
    
};