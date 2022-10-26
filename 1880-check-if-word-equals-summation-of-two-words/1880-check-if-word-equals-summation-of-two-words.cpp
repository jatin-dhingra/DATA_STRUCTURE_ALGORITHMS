class Solution {
public:
    bool isSumEqual(string f, string s, string t) 
    {
        string a{},b{},c{};
        for(char i:f)
        {
            a+=to_string(i-'a');
        }
        for(char i:s)
        {
            b+=to_string(i-'a');
        }
        for(char i:t)
        {
            c+=to_string(i-'a');
        }
       // cout<<a<<" "<<b<<" "<<c<<endl;
        int one,two,three;
        one=stoi(a);
        two=stoi(b);
        three=stoi(c);
        return (one+two)==three;
        
    }
};