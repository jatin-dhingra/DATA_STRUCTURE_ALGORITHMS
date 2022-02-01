#include <bits/stdc++.h>
using namespace std;

void name5(int n)
{
  if(n==0)
  {
    return;
  }
  cout<<"jatin"<<endl;
  name5(n-1);
}

void print(int i,int j)
{
  if(i>j){
    return;
  }
  cout<<i<<endl;
  print(i+1,j);
}

void printrev(int a,int b)
{
  if(a<1)
  {
    return;
  }

  printrev(a-1,b);
    cout<<a<<endl;
}

void printbacktrack(int a,int b)
{
  if(a>b)
  {
    return;
  }
  cout<<a<<endl;
  print(a,b);

}

void printrevbacktrack(int a,int b)
{
  if(a<b)
  {
    return;
  }
  printrevbacktrack(a,b+1);
  cout<<b<<endl;
}

int main()
{
  name5(5);
  print(1,10);
  printrev(5,1);
  cout<<"---------------"<<endl;
  printbacktrack(1,10);
  cout<<"---------------"<<endl;
  printrevbacktrack(10,1);
}
