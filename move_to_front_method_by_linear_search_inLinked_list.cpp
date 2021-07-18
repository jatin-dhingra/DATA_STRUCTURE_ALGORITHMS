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

//MOVE TO FRONT METHOD

Node* search(Node *p,int x)
{
  Node *q=NULL;
  while(p!=NULL)
  {
    if(x==p->data)
    {
        q->next=p->next;
        p->next=first;
        first=p;
    }
    q=p;
    p=p->next;
  }

}

int main()
{
  int a[]{1,2,322,233,5};
  int n=sizeof(a)/sizeof(a[0]);
  create(a,n);
  display(first);
  cout<<endl;

  int x;
  cin>>x;

  search(first,x);
}
