class Solution {
public:
    int compress(vector<char>& ch)
    {
        int n = ch.size();
        int index{};
        int i{};
        while(i<n)
        {
            int j=i;
            while(j < n && ch[i] == ch[j])
            {
                j++;
            }
            ch[index++]=ch[i];
            if(j-i > 1){
                string count = to_string(j-i);
                for(int c = 0; c < count.size();c++){
                    ch[index++] = count[c];
                }
            }
            i = j;
        }
        return index;
    }
};