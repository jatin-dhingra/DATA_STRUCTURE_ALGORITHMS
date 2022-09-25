class MyCircularQueue {
public:
    deque<int>dq;
    int l{};
    MyCircularQueue(int k) 
    {
       l=k;
    }
    
    bool enQueue(int value) 
    {
        if(dq.size()==l)
        {
            return 0;
        }
        dq.push_back(value);
        return 1;
    }
    
    bool deQueue() 
    {
        if(isEmpty())
        {
            return 0;
        }
        dq.pop_front();
        return 1;
    }
    
    int Front() 
    {
        if(isEmpty())
        {
            return -1;
        }
        int val=dq.front();
        return val;
    }
    
    int Rear() 
    {
        if(isEmpty())
        {
            return -1;
        }
        
        int s=dq.back();
        return s;
    }
    
    bool isEmpty() 
    {
        return dq.size()==0?1:0;
        
    }
    
    bool isFull() 
    {
        return dq.size()==l?1:0;
        
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */