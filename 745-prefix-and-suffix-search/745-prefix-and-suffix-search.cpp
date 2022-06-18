class trie{
    public:
    unordered_map<char,trie*> map;
    bool isEnd=false;
    int pos=-1;
};
class WordFilter {
public:
    trie* root;    
    WordFilter(vector<string>& words) {
        root = new trie();
        int j,p=0;
        for(auto st : words)
        {
            for(int j=0;j<st.size();j++)
            {
                auto hey=root;
                string nw=st.substr(j,st.size()-j);
                nw+='*';nw+=st;
                for(auto c: nw)
                {
                    if(!hey->map[c]) hey->map[c]=new trie();
                    hey=hey->map[c];hey->pos=p;
                }
                hey->isEnd=true;
            }
           ++p;
        }
       
    }
    
    int f(string prefix, string suffix) {
       
        trie* hey = root;
        suffix+='*';
        suffix+=prefix;
        for(auto c: suffix)
        {
            if(!hey->map[c]) return -1;
            hey=hey->map[c];
        }
        return hey->pos;   
    }
};
/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */