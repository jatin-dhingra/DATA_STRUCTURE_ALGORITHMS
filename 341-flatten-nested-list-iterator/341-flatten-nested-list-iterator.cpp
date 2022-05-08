class NestedIterator {
queue<int> data;
    
public:
    NestedIterator(vector<NestedInteger> &nestedList) {
        flatten(nestedList);
    }
    
    void flatten(vector<NestedInteger> &list) {
        for (NestedInteger el : list)
            if (el.isInteger()) data.push(el.getInteger());
            else flatten(el.getList());
    }
    
    int next() {
        int res = data.front(); data.pop();
        return res;
    }
    
    bool hasNext() { return data.size() > 0; }
};