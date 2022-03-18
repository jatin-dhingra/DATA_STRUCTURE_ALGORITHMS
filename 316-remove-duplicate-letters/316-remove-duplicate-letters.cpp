class Solution {
public:
    string removeDuplicateLetters(string s) 
    {
       stack<char> st;
        
        map<char, int> mp;
        vector<bool> visited(26, false);
        
        for(char it : s)
            mp[it]++;
        
        for(char it : s)
        {
            if(!visited[it-'a'])
            {
                if(st.empty() or it > st.top())
                    st.push(it);
                
                else
                {
                    while(!st.empty() and it < st.top() and mp[st.top()] > 0)
                        visited[st.top()-'a'] = false, st.pop();

                    st.push(it);
                }
            }
            
            visited[it-'a'] = true;
            mp[it]--;
        }
        
        string ans;
        
        while(!st.empty())
            ans.push_back(st.top()), st.pop();
        
        reverse(ans.begin(), ans.end());
        
        return ans;
        
    }
};