class Solution {
public:
    bool detectCapitalUse(string word) 
    {
        bool capital{},nonecapital{},firstcapital{};
        int n=word.size();
        
        for(int i{};i<n;i++)
        {
            if(isupper(word[i]))
            {
                capital=true;
            }
            else
            {
                capital=false;
                break;
            }
        }
        if(capital)
        {
            return true;
        }
        for(int i{};i<n;i++)
        {
            if(islower(word[i]))
            {
                nonecapital=true;
            }
            else
            {
                nonecapital=false;
                break;
            }
        }
        if(nonecapital)
        {
            return true;
        }
        if(isupper(word[0]))
        {
            for(int i{1};i<n;i++)
            {
                if(islower(word[i]))
                {
                    firstcapital=true;
                }
                else
                {
                    firstcapital=false;
                    break;
                }
            }
            if(firstcapital)
            {
                return true;
            }
        }
        
        return false;
        
        
        
    }
};