#include <bits/stdc++.h>
using namespace std;

string convert(int n)
{
  string ans{};
  while(n>0)
  {
    ans+=to_string(n%2);
    n/=2;
  }
  reverse(ans.begin(),ans.end());
  return ans;
}

int main()
{
  int n;
  cin>>n;
  cout<<convert(n);
}
