#include <bits/stdc++.h>
using namespace std;
void hello(int n)
{
  if(n==0)
  {
    return;
  }
  cout<<"jatin"<<endl;
  hello(n-1);
}
int sum(int n)
{
  int ans{};
  if(n==0)
  {
    return 0;
  }
  ans+=sum(n-1);
  return ans+n;
}

int sumdigit(int n)
{
  if(n==0)
  {
    return 0;
  }
  int remaining=n/10;
  int last=n%10;
  return sumdigit(remaining) + last;
}

void pattern(int n)
{
  if(n==0)
  {
    return;
  }
  pattern(n-1);
  for(int i{1};i<=n;i++){
    cout<<i<<" ";
  }cout<<endl;
}
void pattern2(int n)
{
  if(n==1)
  {
    cout<<1<<endl;
    return ;
  }
  for(int i{1};i<=n;i++)
  {
    cout<<i<<" ";
  }cout<<endl;
  pattern2(n-1);
  for(int i{1};i<=n;i++)
  {
    cout<<i<<" ";
  }cout<<endl;

}

void pattern3(int n)
{
  if(n==0)
  {
    return ;
  }

  for(int i{1};i<=n;i++)
  {
    cout<<i<<" ";

  }
  cout<<endl;
    pattern(n-1);

}
int fibbo(int n)
{
  if(n==1|| n==2)
  {
    return n;
  }
  return fibbo(n-1)+fibbo(n-2);
}

int main()
{
  hello(10);
  cout<<sum(5);
  cout<<sumdigit(262);
  pattern(5);
  pattern2(10);
  pattern3(5);
  cout<<fibbo(7);
}
