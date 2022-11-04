class Solution {
public:
    bool check(char c)
    {
        char arr[]={'a','e','i','o','u','A','E','I','O','U'};
        for(char x:arr)
        {
            if(x==c)
            {
                return 1;
            }
        }
        return 0;
    }
    string reverseVowels(string s) 
    {
        int n=s.size();
        int i{},j{n-1};
        while(i<j)
        {
            if(check(s[i]) && check(s[j]))
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(check(s[i]) && !check(s[j]))
            {
                j--;
            }
            else if(!check(s[i]) && check(s[j]))
            {
                i++;
            }
            else
            {
                i++;
                j--;
                
            }
        }
        return s;
    }
};