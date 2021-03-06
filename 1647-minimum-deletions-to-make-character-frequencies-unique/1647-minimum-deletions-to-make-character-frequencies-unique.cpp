class Solution {
public:
    int minDeletions(string s)
    {
        map<char,int>m;
        for(char c:s)
        {
            m[c]++;
        }
        
        int count{};
        set<char>st;
       
        for(auto i:m)
        {
            if(st.find(i.second)==st.end())
            {
                st.insert(i.second);
            }
            else
            {
                while(st.find(i.second)!=st.end() && i.second!=0)
                {
                    i.second--;
                    count++;
                }
                if(i.second!=0)
                {
                    st.insert(i.second);
                }
            }
        }
        return count;
        
    }
};