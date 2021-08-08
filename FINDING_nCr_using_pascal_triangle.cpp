//by using pascals triangle
/*
      1
     1 1
    1 2 1
  1 3  3 1
 1 4 6 4  1


*/

int combination(int n,int r)
{
  if(n==r || r==0)
  {
    return 1;
  }
  else
  {
    return combination(n-1,r-1)+combination(n-1,r);
  }
}

#include <bits/stdc++.h>
using namespace std;
int main()

{
  int n,r;
  cin>>n>>r;
  cout<<combination(n,r);
}
