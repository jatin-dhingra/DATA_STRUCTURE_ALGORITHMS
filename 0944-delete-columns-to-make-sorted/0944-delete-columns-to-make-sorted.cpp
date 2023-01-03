class Solution {
public:
    int minDeletionSize(vector<string>& strs) 
    {
        int n=strs.size();
        
        int st=strs[0].size();
        int count{};
        for(int i{};i<st;i++)
        {
            for(int j{1};j<n;j++)
            {
                if(strs[j][i]<strs[j-1][i])
                {
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};