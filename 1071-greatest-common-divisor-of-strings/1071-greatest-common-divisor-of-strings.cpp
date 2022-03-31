class Solution {
public:
    string gcdOfStrings(string str1, string str2) 
    {
        int a=str1.size();
        int b=str2.size();
        int gcd=__gcd(a,b);
        
        string ans=str1.substr(0,gcd);
        return (str1+str2==str2+str1)?ans:"";
        
    }
};