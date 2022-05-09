class Solution {
public:
    void func(map<int,string>m,string digits,vector<string>&ans1,int i,string &newstr)
    {
        if(i==digits.size())
        {
            ans1.push_back(newstr);
            return;
        }
        for(auto x:m[digits[i]-'0'])
        {
            newstr.push_back(x);
            func(m,digits,ans1,i+1,newstr);
            newstr.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) 
    {
        vector<string>ans1,ans2;
        map<int,string>m;
        string newstr{};
        int i=0;
        m[2]="abc";
        m[3]="def";
        m[4]="ghi";
        m[5]="jkl";
        m[6]="mno";
        m[7]="pqrs";
        m[8]="tuv";
        m[9]="wxyz";
        func(m,digits,ans1,i,newstr);
        if(digits.size()==0)
        {
            return ans2;
        }
        
        return ans1;
        
        
    }
};