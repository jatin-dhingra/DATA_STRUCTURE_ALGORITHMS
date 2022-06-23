#include <bits/stdc++.h>
using namespace std;

int f(int n){

  if(n==0)
  {
    return 0;
  }
  int anss=f(n-1);
  return anss+n;
}

int sumdigit(int n)
{
  //12342
  //sumdigit(1234)+2;
  if(n==0)
  {
    return 0;
  }
  int rem=n/10;
  int last=n%10;
  cout<<rem<<" "<<last<<endl;
  return sumdigit(rem)+last;
}

void pattern(int n)
{
  if(n==1)
  {
    cout<<1<<" "<<endl; ;
    return;
  }
  for(int i{1};i<=n;i++){
    cout<<i<<" ";
  }
  cout<<endl;
  pattern(n-1);
  for(int i{1};i<=n;i++){
    cout<<i<<" ";
  }
  cout<<endl;

}

int fib(int n)
{
  if(n==1){
    return 0;
  }
  if(n==2)
  {
    return 1;
  }
  return fib(n-1) + fib(n-2);
}

int main()
{
  int n{};
  cin>>n;
  cout<<f(n);

  cout<<sumdigit(n);

  pattern(n);

  cout<<fib(n);
}
