class Solution {
public:
    int maxSatisfaction(vector<int>& s) 
    {
        sort(s.begin(),s.end(),greater<int>());
        int n=s.size();
        if(s[0]<0)
        {
            return 0;
        }
        int count{s[0]};
        for(int i{1};i<n;i++)
        {
            count+=max(s[i]+=s[i-1],0);
            if(count<0)
            {
                break;
            }
        }
        return count;
    }
};