class Solution {
public:
    int calculate(string s) 
    {
        int res{},sum{};
        int sign = 1;
        stack<int> myStack({1});
        for(auto i: s)
        {
            if(isdigit(i))
            {
                sum = sum * 10 + (i-'0');
            }
            else{
                res += sum * sign * myStack.top();
                sum = 0;
                if(i == '-') 
                {
                    sign = -1;
                }
                else if(i == '+')
                {
                    sign = 1;
                }
                else if(i == '(')
                {
                    myStack.push(myStack.top() * sign), sign = 1;
                }
                else if(i == ')'){
                    myStack.pop();
                }
            }
        }
        return res += (sum * sign);
        
    }
};