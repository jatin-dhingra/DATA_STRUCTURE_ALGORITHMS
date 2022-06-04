class Solution {
public:
    int countPoints(string rings) 
    {
        unordered_map<char,set<char>>mp;
        int n=rings.size();
        for(int i{};i<n;i+=2)
        {
            mp[rings[i+1]].insert(rings[i]);
        }
        int count{};
        for(auto i:mp)
        {
            if(i.second.size()==3)
            {
                
                count++;
            }
        }
        return count;
        
    }
};