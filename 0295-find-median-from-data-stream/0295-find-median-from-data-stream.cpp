class MedianFinder {
public:
    priority_queue<int>small,large;
    
    
    void addNum(int num) 
    {
        small.push(num);
        large.push(-small.top());
        small.pop();
        if(small.size()<large.size())
        {
            small.push(-large.top());
            large.pop();
        }
        
    }
    
    double findMedian() 
    {
        if(small.size()>large.size())
        {
            return small.top();
        }
        else
        {
            return (small.top()-large.top())/2.0;
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */