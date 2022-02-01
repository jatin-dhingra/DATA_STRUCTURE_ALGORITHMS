#include <bits/stdc++.h>
using namespace std;

void printsum(int a,int sum)
{
  if(a<1)
  {
    cout<<sum;
    return;
  }
  printsum(a-1,sum+a);
}

int print(int n)
{
  if(n==0)
  {
    return 0;
  }
  return n+print(n-1);
}

int fac(int n)
{
  if(n==1||n==0)
  {
    return 1;
  }
  return n*fac(n-1);
}

void rev(int arr[],int i,int j)
{
  if(i>=j)
  {
    return;
  }
  swap(arr[i],arr[j]);
  rev(arr,i+1,j-1);
}

bool ispalin(string s,int i)
{
  if(i>s.size()/2)
  {
    return true;
  }
  return s[i]==s[s.size()-1-i] && ispalin(s,i+1);

}

int main()
{
  printsum(5,0);
  cout<<"---------------"<<endl;
  cout<<print(5);
  cout<<"---------------"<<endl;
  cout<<fac(4);
  cout<<"---------------"<<endl;
  int arr[]={1,2,3,4,5,6};
  rev(arr,0,5);
  for(int i{};i<6;i++){
    cout<<arr[i]<<" ";
  }cout<<endl;
  cout<<"---------------"<<endl;
  cout<<ispalin("abaabaa",0);

}
