struct Node
{
    Node* links[26];
    bool flag=false;
    bool containkeys(char x)
    {
        return (links[x-'a']!=NULL);
    }
    
    void put(char ch,Node* node)
    {
         links[ch-'a']=node;
    }
    Node* get(char c)
    {
        return links[c-'a'];
    }
    void maketrue()
    {
        flag=true;
    }
    bool isend()
    {
        return flag;
    }
};

class Trie {
private: Node* root;
public:
    Trie() 
    {
        root=new Node();   
    }
    
    void insert(string word) 
    {
        Node* node=root;
        for(int i{};i<word.size();i++)
        {
            if(!node->containkeys(word[i]))
            {
                node->put(word[i],new Node());
            }
            node=node->get(word[i]);
        }
        node->maketrue();
        
    }
    
    bool search(string word)
    {
        Node* node=root;
        for(int i{};i<word.size();i++)
        {
            if(!node->containkeys(word[i]))
            {
                return false;
            }
            node=node->get(word[i]);
        }
        return node->isend();
    }
    
    bool startsWith(string prefix) 
    {
       Node* node=root;
        for(int i{};i<prefix.size();i++)
        {
            if(!node->containkeys(prefix[i]))
            {
                return false;
            }
            node=node->get(prefix[i]);
        }
        return true;
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */