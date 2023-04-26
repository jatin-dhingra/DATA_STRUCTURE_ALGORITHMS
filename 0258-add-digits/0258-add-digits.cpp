class Solution {
public:
    int addDigits(int num) 
    {
        int ans{};
        string s=to_string(num);
        while(s.size()!=1)
        {
            int num{};
            for(int i{};i<s.size();i++)
            {
                num+=(s[i]-'0');
            }
            s=to_string(num);
        }
        return stoi(s);
        
    }
};