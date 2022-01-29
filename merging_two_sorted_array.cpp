#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a[]{1,5,7,12};
  int b[]{2,3,6,11,14,17};
  int n=sizeof(a)/sizeof(a[0]);
  int m=sizeof(b)/sizeof(b[0]);
  int arr[n+m];
  int i=0;
  int j=0;
  int k=0;
  while(i!=n && j!=m)
  {
    if(a[i]>b[j])
    {

      arr[k++]=b[j++];

    }
    else if(a[i]<b[j])
    {

      arr[k++]=a[i++];

    }
  }

    while(i<n)
    {
      arr[k++]=a[i++];

    }


    while(j<m)
    {
      arr[k++]=b[j++];
    
    }

  for(int i{};i<m+n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;

}
