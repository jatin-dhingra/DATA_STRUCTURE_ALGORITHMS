class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) 
    {
        int sum{};
        int n=plants.size();
        int check=capacity;
        int count{};
        int returnsum{};
        int ans{};
        for(int i{};i<n;i++)
        {
            if(check>=plants[i])
            {
                count++; 
            }
            else
            {
                check=capacity;
                count=count+2*i+1;
            }
            check-=plants[i];
        }
        return count;
    }
};
