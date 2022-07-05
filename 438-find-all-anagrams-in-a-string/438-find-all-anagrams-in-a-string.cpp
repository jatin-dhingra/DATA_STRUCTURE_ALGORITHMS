class Solution {
public:
    vector<int> findAnagrams(string s, string p) 
    {
        unordered_map<char,int> map1,map2;
        vector<int> arr;
        if (p.size()>s.size())
            return arr;
        for(int i=0;i<p.size();i++){
            map1[p[i]] +=1;
            map2[s[i]] +=1;
        }
        if(map1==map2)arr.push_back(0);
        for(int i=p.size();i<s.size();i++){
            map2[s[i]] +=1;
            map2[s[i-p.size()]] -=1;
            if(map2[s[i-p.size()]] <= 0){
                map2.erase(s[i-p.size()]);
            }
            
            if(map1==map2)
                arr.push_back(i-p.size()+1);
        }
        return arr;
        
    }
};