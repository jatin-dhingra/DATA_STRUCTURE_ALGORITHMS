class Solution {
public:
    int maximum69Number (int nums)
    {
        int ans{};
        string s=to_string(nums);
        string finalans{};
        int val{};
        int check{};
        for(int i{};i<s.size();i++)
        {
            if(s[i]=='9')
            {
                finalans+=s[i];
                
            }
            else if(s[i]=='6')
            {
                check=1;
                finalans+='9';
                val=i;
                break;
            }
        }
        if(check)
        {
            finalans+=s.substr(val+1);
           
        }
         ans=stoi(finalans);
        return ans;
        
    }
};