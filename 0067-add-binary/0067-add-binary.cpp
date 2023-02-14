class Solution {
public:
    string addBinary(string a, string b) 
    {
        int i=a.size()-1;
        int j=b.size()-1;
        int carry{};
        string ans{};
        
        while(i>=0|| j>=0)
        {
            int val1{},val2{};
            val1=(i>=0?(a[i]-'0'):0);
            
            val2=(j>=0?(b[j]-'0'):0);
            
            // cout<<val1<<" "<<val2<<" "<<carry<<endl;
            int total=val1+val2+carry;
            ans=to_string(total%2)+ans;
            carry=total/2;
            i--;
            j--;
        }
        // cout<<ans<<endl;
        return carry?'1'+ans:ans;
    }
};