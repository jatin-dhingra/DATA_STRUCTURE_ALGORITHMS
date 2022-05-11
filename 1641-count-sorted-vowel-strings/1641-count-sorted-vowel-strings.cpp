class Solution {
public:
    int finalans{};
    void function(int count,int inc,int n)
    {
        if(inc==n)
        {
            
            finalans++;
            return;
        }
        for(int i=count;i<5;i++)
        {
           
            function(i,inc+1,n);
        }
    }
    int countVowelStrings(int n) 
    {
        vector<char>vo{'a','e','i','o','u'};
        int count{1};
        int inc{0};
        string ans{};
        vector<string>contain;
        finalans=0;
        function(0,0,n);
        
        return finalans;
    }
};