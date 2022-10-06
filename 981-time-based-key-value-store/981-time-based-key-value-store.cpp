class TimeMap {
public:
    unordered_map<string,unordered_map<int,string>>m;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) 
    {
        m[key][timestamp]=value;
        
    }
    
    string get(string key, int timestamp) 
    {
        string ans{};
        for(int i=timestamp;i>0;i--)
        {
            if(m[key].find(i)!=m[key].end())
            {
                return m[key][i];
            }
        }
        return ans;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */