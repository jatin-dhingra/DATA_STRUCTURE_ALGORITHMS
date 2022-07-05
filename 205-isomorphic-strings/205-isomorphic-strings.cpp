class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
       int n1=s.length(),n2=t.length();
        if(n1!=n2)
            return false;
        unordered_map<char,char> um;
        
        vector<bool> visited(128,false);
        
        for(int i=0;i<n1;i++){
            if(um.find(s[i])==um.end()){
                if(visited[t[i]])
                    return false;
                um[s[i]]=t[i];
            }
            else if(um[s[i]]!=t[i])
                return false;
            visited[t[i]]=true;
        }
        return true;
    }
};