#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
};
Node* first=NULL;

void create(int a[],int n)
{
  Node *t,*last;
  first= new Node;
  first->data=a[0];
  first->next=NULL;
  last = first;
  for(int i{1};i<n;i++)
  {
    t=new Node;
    t->data=a[i];
    t->next=NULL;
    last->next=t;
    last=t;
  }
}

void display(Node *p)
{
  while(p!=NULL)
  {
    cout<<p->data<<"->";
    p=p->next;
  }
}

void maxiele(Node *p)
{
  int maxx=-23232;
  while(p!=0)
  {
    if(maxx < p->data)
    {
      maxx=p->data;
    }
    p=p->next;
  }
  cout<<"maximum value is : "<<maxx;
}

int main()
{
  int a[]{1,2,322,233,5};
  int n=sizeof(a)/sizeof(a[0]);
  create(a,n);
  //display(first);
  maxiele(first);
}
