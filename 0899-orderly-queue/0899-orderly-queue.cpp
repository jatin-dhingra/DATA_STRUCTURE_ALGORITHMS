class Solution {
public:
    string orderlyQueue(string S, int K) {
         if (K > 1) {
            sort(S.begin(), S.end());
            return S;
        }
        string tempr=S;
        S= S+ S;
        for(int i=1;i<tempr.size();i++){
            tempr=min(tempr,S.substr(i,tempr.size()));
        }
        return tempr;
    }
};