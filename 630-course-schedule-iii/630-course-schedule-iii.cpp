class Solution {
public:
    static bool comp(vector<int>a,vector<int>b)
    {
        return a[1]<b[1];
    }
    int scheduleCourse(vector<vector<int>>& courses) 
    {
        int count{};
        sort(courses.begin(),courses.end(),comp);
        
        priority_queue<int>pq;
        
        for(auto i:courses)
        {
            count+=i[0];
            pq.push(i[0]);
            if(count>i[1])
            {
                count-=pq.top();
                pq.pop();
                
            }
            
        }
        return pq.size();
        
        
    }
};