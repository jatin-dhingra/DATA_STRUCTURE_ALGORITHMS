#include <bits/stdc++.h>
using namespace std;
void selection(int arr[],int n)
{
  for(int i{};i<n;i++)
  {
    int j=i;
    int k=i;
    for(int x=j;x<n;x++)
    {
      if(arr[j]<arr[k])
      {
        k=x;
        j++;
      }
      else
      {
        j++;
      }
    }
    swap(arr[i],arr[k]);
  }
  for(int i{};i<n;i++){
    cout<<arr[i]<<" ";
  }cout<<endl;

}
int main()
{
  int arr[]={9,8,7,6,5,4,32,1};
  int n=sizeof(arr)/sizeof(arr[0]);
  selection(arr,n);
}
