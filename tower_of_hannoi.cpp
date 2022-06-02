#include <bits/stdc++.h>
using namespace std;
void TOH(int n,int a,int b,int c)
{
  if(n>0)
  {
    TOH(n-1,a,c,b);
    cout<<a<<" "<<c<<endl;
    TOH(n-1,b,a,c);
  }
}
int main()
{
  int n{},a{},b{},c{};
  cin>>n>>a>>b>>c;
  TOH(n,a,b,c);
}
