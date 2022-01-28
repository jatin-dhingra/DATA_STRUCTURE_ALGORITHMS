#include <bits/stdc++.h>
using namespace std;
void example()
{
  cout<<(5&15&7)<<endl;
  cout<<(2|4)<<endl;
  //xor ^ ;
  cout<<(6^6)<<endl;
  // negation
  cout<<(~6)<<endl;
  //right shift >>
  cout<<(5>>1)<<endl;
  cout<<(10>>2)<<endl; // divide number by 2 , 2time
  cout<<(12>>3)<<endl;  //divide 12 by  2 , 3 times

  // left shift
  cout<<(10<<3)<<endl; // multiplication
  cout<<(5<<2)<<endl;
}
void q1(int arr[],int n)
{
  // use xor because number occur 2times if number ocur 2times its xor will be zero
  int ans{};
  for(int i{};i<n;i++){
    ans=(ans^arr[i]);
  }
  cout<<ans<<endl;
}
void swap(int a,int b)
{
  cout<<"before swaps "<<a<<" "<<b<<endl;
  a=a^b;
  b=a^b;
  a=a^b;
  cout<<"after swaps "<<a<<" "<<b<<endl;
}
int xxor(int n)
{
  // int ans{};
  // for(int i{1};i<=5;i++){
  //   ans=ans^i;
  // }cout<<ans<<endl;

// pattern of observation
  int ans{};
  if(n%4==0){
  ans= n;
  }
  else if(n%4==1)
  {
    ans= 1;
  }
  else if(n%4==2)
  {
    ans= n+1;
  }
  else if(n%4==3)
  {
    ans= 0;
  }
  return ans;
}

void xorlen(int a,int b)
{
  cout<<xxor(b)-xxor((a-1));
  // 1 2 a 4 5 b;
  //1 2 a
  //xor(a-1);
}

void even(int n)
{
  if(n&1)
  {
    cout<<"ODD"<<endl;
  }
  else
  {
    cout<<"even"<<endl;
  }
}

void setunset(int n,int i)
{
  // 1010
  // 3210
  // make mask
  // 1010
  // 0100  and
  // 0000  result 0 then unset otherwise set

  if((n&(1<<i))==0)
  {
    cout<<"Unset"<<endl;
  }
  else{
    cout<<"Set"<<endl;
  }

}

void extract(int n,int i)
{
  cout<<(n&(1<<i))<<endl;
}

void setbit(int n,int i)
{

  cout<<(n|(1<<i))<<endl;
}

void clearthebit(int n,int i)
{
  // 1010
  // 3210
  // make mask
  // 1010
  // 0100  and negatiion of it
  // 0000  result 0 then unset otherwise set
  int mask=~(1<<i);
  cout<<(n&mask)<<endl;
}

void remove(int n)
{
  cout<<(n&(n-1))<<endl;
}

void checkpowerof2(int n)
{
  if((n&(n-1))==0)
  {
    cout<<1<<endl;
  }
  else
  {
    cout<<0<<endl;
  }
}


void countsetbits(int n)
{
  //use the remove of bit concepts
  int count{};
  while(n!=0)
  {
    n=n&(n-1);
    count++;
  }
  cout<<count<<endl;
}

int main()
{
  //example();
  int arr[]={1,1,2,2,4,4,6,6,6,3,3};
  int n=sizeof(arr)/sizeof(arr[0]);
  XOR

  q1(arr,n);
  swap(5,8);

  xorlen(3,6);

  and
  even(6);

  n and i check ith bit is set or not?
  setunset(7,2);

  extract(11,3);
  setbit(15,2);

  clearthebit(7,2);

  removelast(15);

  checkpowerof2(16);
  
  countsetbits(7);

}
