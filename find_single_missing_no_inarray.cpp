//JATIN DHINGRA
//VIT VELLORE

#include <bits/stdc++.h>
using namespace std;
int main(){
  // METHOD 1
  int arr[11]{1,2,3,4,5,7,8,9,10,11,12};
  int n;
  n=arr[10];
  int ans=(n*(n+1))/2;
  int sum{};
  for(int i{};i<11;i++)
  {
    sum+=arr[i];
  }
  cout<<ans-sum;


  // METHOD 2
  int brr[11]{6,7,8,9,10,11,13,14,15,16,17};
  int low=brr[0];
  for(int i{};i<11;i++)
  {
    if(low!=brr[i]-i)
    {
      cout<<i+low<<endl;
      break;
    }

  }
}
