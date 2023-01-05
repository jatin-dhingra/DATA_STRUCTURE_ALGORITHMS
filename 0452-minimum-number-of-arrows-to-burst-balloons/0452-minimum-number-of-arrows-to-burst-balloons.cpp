
bool  comp(vector<int>&a,vector<int>&b)
{

    return a[1]<b[1];
}
class Solution {
public:
    
    int findMinArrowShots(vector<vector<int>>& points) 
    {
        int n=points.size();
        sort(points.begin(),points.end(),comp);
        int count{1};
        int point=points[0][1];
        // for(auto i:points)
        // {
        //     cout<<i[0]<<" "<<i[1]<<endl;
        // }
        for(int i{};i<n;i++)
        {
            if(point>=points[i][0])
            {
                continue;
            }
            count++;
            point=points[i][1];
        }
        return count;
        
    }
};