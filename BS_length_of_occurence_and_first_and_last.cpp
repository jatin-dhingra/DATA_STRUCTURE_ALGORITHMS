#include <bits/stdc++.h>
using namespace std;
int bs(int arr[],int s,int l,int target)
{
  int f=0;
  while(s<=l)
  {
    int mid=s+(l-s)/2;
    if(arr[mid]==target){
      f=mid;
    l=mid-1;

    }
    else if(target<arr[mid])
    {
      l=mid-1;

    }
    else{
      s=mid+1;
    }
  }
  return f;
}
int bse(int arr[],int s,int l,int target){
  int e{};
  while(s<=l)
  {
    int mid=s+(l-s)/2;
    if(arr[mid]==target){
      e=mid;
      s=mid+1;

    }
    else if(target<arr[mid])
    {
      l=mid-1;

    }
    else{
      s=mid+1;
    }
  }
  return e;
}
int main()
{
  int arr[]{2,4,6,10,10,18,20};
  int s=0;
  int last=sizeof(arr)/sizeof(arr[0]);
  int target{10};
  int l=last-1;
  int first=bs(arr,s,l,target);
  int end=bse(arr,s,l,target);
  cout<<end-first+1<<endl;
 
}
