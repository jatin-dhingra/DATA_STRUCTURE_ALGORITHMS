#include <bits/stdc++.h>
using namespace std;

void permute(string s,int i,int j)
{
  if(i==j)
  {
    cout<<s<<endl;
  }
  else{
    for(int x=i;x<=j;x++)
    {
      //swap the element 
      swap(s[i],s[x]);
      permute(s,i+1,j);
      //backtrack
      swap(s[i],s[x]);
    }
  }
}


int main()
{
  string s;
  cin>>s;
  int n=s.size()-1;
  permute(s,0,n);
}
