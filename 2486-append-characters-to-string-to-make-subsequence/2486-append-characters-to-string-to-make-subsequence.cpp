class Solution {
public:
    int appendCharacters(string s, string t) 
    {
        int n=s.size();
        int m=t.size();
        int count{};
        int i{},j{};
        while(i<n)
        {
            if(s[i]==t[j])
            {
                j++;
               
            }
            if(j==m)
            {
                return 0;
            }
            i++;
        }
        return m-j;
        
    }
};