class Solution {
public:
    
    bool reorderedPowerOf2(int n) 
    {
        string s=to_string(n);
        if(n==1)
        {
            return true;
        }
        int counteven{};
        for(int i{};i<s.size();i++)
        {
            if((s[i]-'0')%2==0)
            {
                counteven++;
            }
        }
        if(counteven==0)
        {
            return false;
        }
        else
        {
            sort(s.begin(),s.end());
            for(int i{};i<31;i++)
            {
                string genstr=to_string(1<<i);
                sort(genstr.begin(),genstr.end());
                if(genstr==s)
                {
                    return true;
                }
            }
        }
        return false;
        
    }
};