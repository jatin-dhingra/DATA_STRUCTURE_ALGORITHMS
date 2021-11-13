#include <bits/stdc++.h>
using namespace std;
boolean isloop(int arr,int n)
{
  Node *f,*s;
  //initialization of the f and s pointer to the first of hte node;
  f=s=first;
  do
  {
    f=f->next;
    s=s->next;
    if(s!=NULL)
    {
      s=s->next;
    }
    else
    {
      return NULL;
    }
  }(while(p!=NULL && q!=NULL));
  if(p==q)
  {
    return true;
  }
  else
  {
    return false;
  }
}
int main()
{
  //given array;
  int arr[]{1,2,3,4,5};
  int n=sizeof(arr)/sizeof(arr[0]);

  cout<<isloop(arr,n);
}
