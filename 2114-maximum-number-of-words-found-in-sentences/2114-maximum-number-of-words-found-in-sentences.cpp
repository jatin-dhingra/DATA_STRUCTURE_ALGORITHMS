class Solution {
public:
    int mostWordsFound(vector<string>& sentences) 
    {
        int ans{};
        vector<int>v;
        for(string i:sentences)
        {
            int count{};
            for(char x:i)
            {
                if(x==' ')
                {
                    count++;
                }
            }
            v.push_back(count+1);
        }
        
        return *max_element(v.begin(),v.end());
        
    }
};