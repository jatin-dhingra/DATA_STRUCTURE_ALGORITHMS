class Solution {
public:
    bool makeStringsEqual(string s, string t) 
    {
        int count1=count(s.begin(),s.end(),'1');
        int count0=s.size()-count1;
        int count11=count(t.begin(),t.end(),'1');
        int count00=t.size()-count11;
        if(s==t)
        {
            return true;
        }
        if((count1 && count11) )
        {
            return true;
        }
        return false;
        
    }
};