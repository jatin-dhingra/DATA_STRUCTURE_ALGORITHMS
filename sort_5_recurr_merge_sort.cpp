#include <bits/stdc++.h>
using namespace std;

void Merge(int A[],int l,int mid,int h)
{
   int i=l,j=mid+1,k=l;
   int B[100];

   while(i<=mid && j<=h)
   {
   if(A[i]<A[j])
   B[k++]=A[i++];
   else
   B[k++]=A[j++];
   }
   for(;i<=mid;i++)
   B[k++]=A[i];
   for(;j<=h;j++)
   B[k++]=A[j];

   for(i=l;i<=h;i++)
   A[i]=B[i];
}

void mergesort(int A[],int l,int h)
{
  int mid;
  if(l<h)
  {
    mid=(l+h)/2;
    mergesort(A,l,mid);
    mergesort(A,mid+1,h);
    Merge(A,l,mid,h);

  }
}

int main()
{
    int A[]{1,4,2,3,7,6,5,8};
    int n=sizeof(A)/sizeof(A[0]);
    int l=0;
    int h=n-1;
    mergesort(A,l,h);

    for(int i{};i<n;i++)
    {
      cout<<A[i]<<" ";
    }
    cout<<endl;
}
