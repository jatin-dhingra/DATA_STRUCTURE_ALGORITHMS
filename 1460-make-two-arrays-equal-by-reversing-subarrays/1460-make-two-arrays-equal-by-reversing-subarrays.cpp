class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) 
    {
        map<int,int>m1,m2;
        for(int i:target)
        {
            m1[i]++;
        }
        for(int i:arr)
        {
            m2[i]++;
        }
        return m1==m2;
        
    }
};