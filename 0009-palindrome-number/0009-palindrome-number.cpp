class Solution {
public:
    bool isPalindrome(int x) {
        string k=to_string(x);
        reverse(k.begin(),k.end());
        string p=to_string(x);
        return p==k;
    }
};