class Solution {
public:
    
    void generate(vector<string>&vecs,set<string>st,string s,int i,int n)
    {
        if(s.size()==n)
        {
           if(st.find(s)==st.end())
           {
               vecs.push_back(s);
           }
            return;
        }
        
        generate(vecs,st,s+'0',i+1,n);
        
        if(vecs.size()!=0)
        {
            return;
        }
        
        generate(vecs,st,s+'1',i+1,n);
        if(vecs.size()!=0)
        {
            return;
        }
    }
    
    string findDifferentBinaryString(vector<string>& nums) 
    {
        set<string>st;
        //int n=nums.size();
        for(int i{};i<nums.size();i++)
        {
            st.insert(nums[i]);
        }
        vector<string>vecs;
        string s{};
        int n=nums[0].size();
        
        generate(vecs,st,s,0,n);
        return vecs[0];
    }
};