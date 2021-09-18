#include <bits/stdc++.h>
using namespace std;
int leftindex(vector<int>v,int n,int s,int l)
{
  int first=0;

  while(s<=l)
  {
    int mid= s+(l-s)/2;
    if(v[mid]==n)
    {
      first=mid;
      l=mid-1;
    }
    else if(v[mid]<n)
    {
      s=mid+1;
    }
    else
    {
      l=mid-1;
    }
  }
  return first;
}

int rightindex(vector<int>v,int n,int s,int l)
{
  int last=0;

  while(s<=l)
  {
    int mid= s+(l-s)/2;
    if(v[mid]==n)
    {
      last=mid;
      s=mid+1;
    }
    else if(v[mid]<n)
    {
      s=mid+1;
    }
    else
    {
      l=mid-1;
    }
  }
  return last;
}

int main()
{

  vector<int>v{2,5,5,5,5,7};
  int n;
  cin>>n;
  int s=0;
  int l=v.size()-1;

  int ans1=leftindex(v,n,s,l);
  int ans2=rightindex(v,n,s,l);
  cout<<abs(ans1-ans2)+1<<endl;
}
