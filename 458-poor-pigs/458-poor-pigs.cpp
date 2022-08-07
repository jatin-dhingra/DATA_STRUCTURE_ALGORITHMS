class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
         int t = (minutesToTest - 1) / minutesToDie + 1;
        if (buckets == 1) return 0;
        return log(buckets - 1) / log(t + 1) + 1;
    }
};