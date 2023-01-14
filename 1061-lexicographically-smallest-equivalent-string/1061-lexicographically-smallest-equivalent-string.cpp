class Solution {
public:

    int find(int a,vector<int> &charmap)
    {
        if(charmap[a]==a){
             return a;
        }
        return find(charmap[a],charmap);
    }
    void u(int a,int b,vector<int> &charmap)
    {
        a=find(a,charmap);
        b=find(b,charmap);

        if(a==b)
        {
            return;
        }

        if(a>b)
        {
            charmap[a]=b;
        }
        else
        {
            charmap[b]=a;
        }
    }
    string smallestEquivalentString(string s1, string s2, string baseStr)
    {
        vector<int> charmap(26);
        for(int i=0;i<26;i++)
        {
            charmap[i]=i;
        }

        for(int i=0;i<s1.size();i++)
        {
            u(s1[i]-'a',s2[i]-'a',charmap);
        }
        string ans;
        for(int i=0;i<baseStr.size();i++)
        {
            ans+=(char)(find(baseStr[i]-'a',charmap)+'a');
        }
        return ans;
    }
};