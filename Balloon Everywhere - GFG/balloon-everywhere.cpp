//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s)
    {
        map<char,int>m;
        int n=s.size();
        for(int i{};i<n;i++)
        {
            m[s[i]]++;
        }
        int ans{};
        int b{},a{},l{},o{},nn{};
        for(auto i:m)
        {
            if(i.first=='b')
            {
                b=m['b'];
            }
            if(i.first=='a')
            {
                a=m['a'];
            }
            if(i.first=='l')
            {
                l=m['l'];
            }
            if(i.first=='o')
            {
                o=m['o'];
            }
            if(i.first=='n')
            {
                nn=m['n'];
            }
        }
        // cout<<b<<" "<<a<<" "<<l<<" "<<o<<" "<<nn<<endl;
        int count{};
        int bandn=min(b,min(a,nn));
        int lando=min(l,o);
        //cout<<bandn<<" "<<lando<<endl;
        if(bandn*2<lando)
        {
            return bandn;
        }
        return lando/2;
        
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends