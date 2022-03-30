class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int t) 
    {
        int a=m.size();
        int b=m[0].size();
        int s=0;
        int e=a*b-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(m[mid/b][mid%b]==t)
            {
                return true;
            }
            else if(m[mid/b][mid%b]<t)
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        return false;
    }
};