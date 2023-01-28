class SummaryRanges {
public:
   
    priority_queue<int,vector<int>,greater<int>> pq ;
    unordered_set<int>SET; 
    
    void addNum(int val)
    {
        if(SET.find(val) == SET.end())
        {
            pq.push(val);
            SET.insert(val); 
        }
    }
    
    vector<vector<int>> getIntervals()
    {
        vector<vector<int>> out ; 
        priority_queue<int,vector<int>,greater<int>> pqcopy = pq;  
        vector<int> temp ; 
        while(!pqcopy.empty()){
            int start = pqcopy.top(); 
            pqcopy.pop(); 
            temp.push_back(start); 
            int end = start ;
            while(pqcopy.size() && start+1 == pqcopy.top()){
                end++; 
                start++; 
                pqcopy.pop();
            }
            temp.push_back(end); 
            out.push_back(temp); 
            temp.clear(); 
        }
        return out ; 
    }
};
/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges* obj = new SummaryRanges();
 * obj->addNum(value);
 * vector<vector<int>> param_2 = obj->getIntervals();
 */