#include <bits/stdc++.h>
using namespace std;
void insertion(int arr[],int n)
{
  int j{};
  int x{};
  for(int i=1;i<n;i++)
  {
    j=i-1;
    x=arr[i];
    while(j>=0 &&arr[j]>x)
    {
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=x;
  }
}

int main()
{

  int arr[]={19,45,22,62,17,31};
  int n=sizeof(arr)/sizeof(arr[0]);
  insertion(arr,n);
  for(int i{};i<n;i++)
  {
    cout<<arr[i]<<" ";
  }


}
