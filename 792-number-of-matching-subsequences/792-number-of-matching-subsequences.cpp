class Solution {
public:
     bool check(string s,string w){
        
        int i=0,j=0;
        for(i=0,j=0; i<s.size() && j<w.size() ;i++){
            if(s[i]==w[j])
            {
                 j++;
            }
        }
        return j==w.size();
    }
    
    int numMatchingSubseq(string s, vector<string>& words) {
        unordered_map<string,int>m;
        int count{};
        for(auto i:words)
        {
            if(m.find(i)!=m.end())
            {
                count+=m[i];
            }
            else
            {
                m[i]=check(s,i);
                count+=m[i];
            }
        }
        return count;
        
    }
};