class FreqStack {
public:
    unordered_map<int,int>mp;
    unordered_map<int,stack<int>>smp;
    int freq{};
    FreqStack() 
    {
        freq=0;
    }
    
    void push(int x) 
    {
        
        mp[x]++;
        if(freq<mp[x])
        {
            freq=mp[x];
        }
        smp[mp[x]].push(x);
    }
    
    int pop() 
    {
        int topstack=smp[freq].top();
        smp[freq].pop();
        mp[topstack]--;
        if(smp[freq].empty())
        {
            smp.erase(freq);
            freq--;
        }
        return topstack;
        
        
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */