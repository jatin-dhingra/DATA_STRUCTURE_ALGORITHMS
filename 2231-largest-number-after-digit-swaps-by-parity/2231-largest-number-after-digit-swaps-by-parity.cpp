class Solution {
public:
    int largestInteger(int num) {
        string s=to_string(num);
        int n=s.size();
        priority_queue<char>odd,even;
        for(char c:s)
        {
            if((c-'0')&1)
            {
                odd.push(c);
            }
            else
            {
                even.push(c);
            }
        }
        string ans{};
        for(int i{};i<n;i++)
        {
            if((s[i]-'0')&1)
            {
                ans.push_back(odd.top());
                odd.pop();
            }
            else
            {
                ans.push_back(even.top());
                even.pop();
            }
        }
        return stoi(ans);
    }
};