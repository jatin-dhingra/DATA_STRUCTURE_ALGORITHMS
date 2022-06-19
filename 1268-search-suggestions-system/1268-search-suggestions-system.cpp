class Solution {
public:
     static bool Comp(string &a,string &b){
        return (a<b);
    }
    
    vector<vector<string>> suggestedProducts(vector<string>& p, string s) {
        unordered_map<string,vector<string>>m;
        string ans{};
        for(auto x:p){
            string a{};
            for(auto z:x){
                a+=z;
                m[a].push_back(x);
            }
        }
        int n = s.size();
        
        vector<vector<string>>c;
        for(int i=0;i<n;i++){
            ans+=s[i];
            auto v = m[ans];
           sort(v.begin(),v.end(),Comp);
            vector<string>x;
            for(auto z:v){
                x.push_back(z);
                if(x.size()==3) break;
            }
            c.push_back(x);
        }
        return c;
    }
};