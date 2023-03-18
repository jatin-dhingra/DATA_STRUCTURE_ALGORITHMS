class BrowserHistory {
public:
    int ind{};
    vector<string>v;
    BrowserHistory(string homepage) 
    {
        v.push_back(homepage);
        ind=0;
        
    }
    
    void visit(string url) 
    {
        
        int ind2=v.size()-1;
        while(ind2>ind)
        {
            ind2--;
            v.pop_back();
        }
        ind++;
        v.push_back(url);
        
    }
    
    string back(int steps) 
    {
        ind-=steps;
        if(ind<0)
        {
            ind=0;
        }
        return v[ind];
        
    }
    
    string forward(int steps) 
    {
        ind+=steps;
        if(ind>v.size()-1)
        {
            ind=v.size()-1;
        }
        return v[ind];
      
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */