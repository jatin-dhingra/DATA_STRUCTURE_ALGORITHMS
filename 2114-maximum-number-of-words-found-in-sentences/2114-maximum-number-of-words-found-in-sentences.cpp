class Solution {
public:
    int mostWordsFound(vector<string>& s) 
    {
        int ans{};
      //  int count{};
        for(auto i:s)
        {
            int count{};
           for(auto x:i)
           {
               if(x==' ')
               {
                   count++;
               }
           }
            ans=max(ans,count+1);
        }
        
        return ans;
    }
};