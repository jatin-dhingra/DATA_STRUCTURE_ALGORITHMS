class MyCalendar {
public:
    vector<pair<int,int>>vp;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) 
    {
        for(auto i:vp)
        {
            if(i.second>start && i.first<end)
            {
                return false;
            }
        }
        vp.push_back({start,end});
        return true;
        
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */