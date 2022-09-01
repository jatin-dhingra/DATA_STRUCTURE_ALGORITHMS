class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k)
    {
        int res=INT_MIN;
        int rows=matrix.size();
        int cols=matrix[0].size();
        for(int left = 0;left<cols;++left)
        {
            vector<int>sums(rows);
            for(int Right = left; Right<cols;Right++)
            {
                for(int i = 0;i<rows;i++)

                    sums[i] += matrix[i][Right];
                    set<int> s = {0};
                    int rum_sum = 0;

                    for(auto sum: sums)
                    {
                        rum_sum+=sum;

                        auto it = s.lower_bound(rum_sum-k);
                        if(it!=end(s))
                        {
                            res = max(res,rum_sum - *it);
                        }
                        s.insert(rum_sum);
                    }
            }
        }
    return res;
    }
};