#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n=1000;
  bool v[n + 1];
  memset(v, true, sizeof(v));
  for(int i = 2; i * i <= n; i++)
    {
        if (v[i] == true)
        {
            for (int j = i * i; j <= n; j+= i)
                v[j] = false;
        }
    }
  for(int i=2;i<n;i++){
    if(v[i]){
      cout<<i<<endl;
    }
  }
}
