class MyHashSet
{
public:
    MyHashSet() {}
    
    void add(int key)
    {
        buckets.set(key % 1000001);
    }
    
    void remove(int key)
    {
        buckets.reset(key % 1000001);
    }
    bool contains(int key)
    {
        return buckets.test(key % 1000001);
    }

private:
    bitset<1000001> buckets;
};