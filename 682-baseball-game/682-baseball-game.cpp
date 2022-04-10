class Solution {
public:
    int calPoints(vector<string>& ops) 
    {
        stack<int>st;
        int n=ops.size();
        int ans{};
        for(int i{};i<n;i++)
        {
            if(ops[i]=="+"){
                int num1=st.top(); st.pop();
                int num2=st.top();
                st.push(num1);
                st.push(num1+num2);
            }
            
            else if(ops[i]=="D")
                st.push(st.top()*2);
            
            else if(ops[i]=="C")
                st.pop();
            
            else
                st.push(stoi(ops[i])); 
        }
        
        while(!st.empty())
        {
            cout<<st.top()<<" ";
            ans+=(st.top());
            st.pop();
            
        }
        return ans;
    }
};