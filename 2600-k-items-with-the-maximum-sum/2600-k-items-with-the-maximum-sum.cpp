class Solution {
public:
    int kItemsWithMaximumSum(int one, int zero, int neg, int k) {
        int ans{};
        priority_queue<int>pq;
        while(one)
        {
            pq.push(1);
            one--;
        }
        while(zero)
        {
            pq.push(0);
            zero--;
        }
        while(neg)
        {
            pq.push(-1);
            neg--;
        }
        while(k)
        {
            ans+=pq.top();
            pq.pop();
            k--;
        }
        return ans;
    }
};