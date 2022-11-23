class Solution {
public:
    int binaryGap(int n) 
    {
        int count{1};
        int ans{INT_MIN};
        vector<int>vec;
        while(n)
        {
            if((n&1)==1)
            {
                vec.push_back(count);
                count++;
            }
            else
            {
                count++;
            }
            n>>=1;
        }
        if(vec.size()<=1)
        {
            return 0;
        }
        int num=vec.size();
        // for(int i:vec)
        // {
        //     cout<<i<<" ";
        // }
        for(int i{};i<num-1;i++)
        {
            ans=max(ans,vec[i+1]-vec[i]);
        }
        return ans;
        
    }
};