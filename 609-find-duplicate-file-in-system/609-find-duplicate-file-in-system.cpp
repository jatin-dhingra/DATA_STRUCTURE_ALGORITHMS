class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) 
    {
        unordered_map<string,vector<string>>mp;
        for(auto it: paths)
        {
            string str =""; 
            int i=0;
            int mark =0; 
            while(i<it.length()){
                if(it[i] == ' ')
                {
                    str += '/'; mark=str.length()-1;
                }  
                else if(it[i] == '(')
                {
                    i++;
                    string temp = "";
                    while(it[i]!=')')
                    {
                        temp += it[i];
                        i++;
                    }
                    mp[temp].push_back(str);
                    str = str.substr(0,mark);  
                }else{
                    str += it[i];
                }
                i++;
            }
        }
        vector<vector<string>>ans;
        for(auto it: mp)
        {
           if(it.second.size() >1) 
           {
               ans.push_back(it.second);
           }
        }
    return ans;
    }   
};