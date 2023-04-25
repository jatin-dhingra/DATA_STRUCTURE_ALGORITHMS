class SmallestInfiniteSet {
public:
    priority_queue<int,vector<int>,greater<int>>pq;
    unordered_map<int,int>m;
    SmallestInfiniteSet() {
        for(int i{1};i<=1000;i++)
        {
            m[i]++;
            pq.push(i);
        }
    }
    
    int popSmallest() {
        int ele=pq.top();
        pq.pop();
        m[ele]--;
        return ele;
    }
    
    void addBack(int num)
    {
        if(!m[num])
        {
            pq.push(num);
            m[num]++;
        }
        
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */