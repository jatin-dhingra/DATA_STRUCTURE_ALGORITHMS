// class Solution {
// public:
//     bool ispalin(string &s)
//     {
//         int n=s.size();
//         int i{},j{n-1};
//         while(i<j)
//         {
//             if(s[i]!=s[j])
//             {
//                 return false;
//             }
//             i++;
//             j--;
//         }
//         return true;
//     }
//     vector<vector<int>> palindromePairs(vector<string>& w)
//     {
//         vector<vector<int>>ans;
//         int n=w.size();
//         unordered_map<string,int>m;
      
//         for(int i=0;i<n;++i)
//         { 
//             string newword= w[i]; 
//             reverse(newword.begin(),newword.end());
//             m[newword]=i;
//         }
        
//         for(int i=0; i<n;i++)
//         {
//             for(int j=0; j<=w[i].size();j++)
//             {
//                 string st1 = w[i].substr(0,j);
//                 string st2 = w[i].substr(j);                
                
//                  if(m.count(st1) && ispalin(st2) && m[st1] != i) 
//                  {
//                      ans.push_back({i, m[st1]});    
//                  }

//                  if(!st1.empty()&&m.count(st2) && ispalin(st1) && m[st2] != i)
//                  {
//                      ans.push_back({m[st2], i});
//                  }
//             }            
//         }
       
//         return ans;
//     }
//     bool isPalindrome(string& s) {   
//           int l=0, r=s.size()-1;
//           while(l<r){if(s[l++]!=s[r--]) return false;}
//           return true; 
//     }


//     vector<vector<int>> palindromePairs(vector<string>& words) {
//         vector<vector<int>> ans;
//         int n = words.size();
//         if(n<2) return ans;
//         unordered_map<string, int> m;
//         for(int i=0;i<n;++i){ auto s= words[i]; reverse(s.begin(),s.end());  m[s]=i;}
        
//         for(int i=0; i<n; ++i){
//             for(int j=0; j<=words[i].size(); ++j){
//                 string st1 = words[i].substr(0,j);
//                 string st2 = words[i].substr(j);                
                
//                  if(m.count(st1) && isPalindrome(st2) && m[st1] != i) {
//                      ans.push_back({i, m[st1]});    
//                  }

//                  if(!st1.empty()&&m.count(st2) && isPalindrome(st1) && m[st2] != i) {
//                      ans.push_back({m[st2], i});
//                  }
//             }            
//         }
//         return ans;
//     }
// };
class Solution {
public:
    map<string,bool>mp;
    bool ispalin(string &s)
    {
        if(mp.find(s) != mp.end())
        {
            return mp[s];
        }
        int n=s.size();
        if(n == 0) 
        {
              return mp[s] = true;
        }
        for(int i = 0;i <= n/2;i++)
        {
            if( s[i] != s[(n - i) - 1] ) 
            {
                return mp[s] = false;
            }
        }
        return mp[s] = true;
    }
    vector<vector<int>> palindromePairs(vector<string>& w) {
      vector<vector<int>> ans;
      int n=w.size();
      unordered_map<string,int> m;
      for(int i=0;i<n;i++)
      {
            string s = w[i];
            reverse(s.begin(),s.end());
            m[s] = i; 
        }

       if(m.find("") != m.end())
       {
            for(int i = 0; i <n; i++)
            {
                if(i == m[""]) 
                {
                    continue;
                }
                if(ispalin(w[i]))
                {
                    ans.push_back({i, m[""]});
                }
            }
        }

       for(int i=0;i<n;i++)
       {
            string a = w[i];
            string b = "";
            for(int j = 0; j <w[i].length() ; j++)
            {
                b.push_back(w[i][j]);
                a.erase(0,1);
                if(m.find(b) != m.end() && ispalin(a) && m[b] != i)
                { 
                    ans.push_back({i, m[b]});
                }
                if(m.find(a) != m.end() && ispalin(b) && m[a] != i)
                {
                    ans.push_back({m[a], i});
                }
            }
        }
        return ans;
    }
};
