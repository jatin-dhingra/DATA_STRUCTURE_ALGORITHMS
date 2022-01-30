#include <bits/stdc++.h>
using namespace std;

void merge(int arr[],int l,int mid,int h)
{
  int b[1001];
  int i{l},j{mid+1},k{l};
  while(i<=mid && j<=h)
  {
    if(arr[i]<arr[j])
    {
        b[k++]=arr[i++];
    }
    else
    {
      b[k++]=arr[j++];
    }
  }
  for(;i<=mid;i++)
  {
    b[k++]=arr[i];
  }
  for(;j<=h;j++){
    b[k++]=arr[j];
  }
  for(int i=l;i<=h;i++){
    arr[i]=b[i];
  }
}

void iterativemerge(int arr[],int n)
{
  int l{},mid{},h,p;
  for(int p=2;p<=n;p=p*2){
    for(int i{};i+p-1<n;i+=p)
    {
      l=i;
      h=i+p-1;
      mid=(l+h)/2;
      merge(arr,l,mid,h);
    }
  }
  if(p/2<n){
    merge(arr,0,p/2-1,n-1);
  }
}

int main()
{

  int arr[]={1,3,9,2,8,6,11,10};
  int n=sizeof(arr)/sizeof(arr[0]);
  iterativemerge(arr,n);
  for(int i{};i<n;i++)
  {
    cout<<arr[i]<<" ";
  }cout<<endl;
}
