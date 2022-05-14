class Solution {
public:
    string reverseWords(string s) 
    {
       // vector<string>str;
        //string newstr{};
        stack<string>st;
        for(int i{};i<s.size();i++)
        {
            string newstr{};
            if(s[i]==' ')
            {
                continue;
            }
            while(i<s.size() && s[i]!=' ' ) 
            { 
                newstr += s[i]; 
                i++;
            }
            st.push(newstr);
        }
       // str.push_back(newstr);
       
        
        string ans{};
         string result;
        while(!st.empty()) {
            result += st.top(); st.pop();
            if(!st.empty()) result += " ";
        }
        return result;
        
        
    }
};