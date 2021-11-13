#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
  int data;
  Node *next;
};
Node *first=NULL,*second=NULL, *third=NULL;

void create1(int arr[],int n)
{
  Node *x,*last;
  first=new Node;
  first->data=arr[0];
  first->next=NULL;
  last=first;
  for(int i=1;i<n;i++)
  {
    x=new Node;
    x->data=arr[i];
    x->next=NULL;
    last->next=x;
    last=x;
  }
}

void create2(int arr2[],int n2)
{
  Node *x,*last;
  second=new Node;
  second->data=arr2[0];
  second->next=NULL;
  last=second;
  for(int i=1;i<n2;i++)
  {
    x=new Node;
    x->data=arr2[i];
    x->next=NULL;
    last->next=x;
    last=x;
  }
}

void display1(Node *p)
{
  while(p!=NULL)
  {
    cout<<p->data<<" ";
    p=p->next;
  }
  cout<<endl;
}

void concatlinkedlist(Node *f,Node *s)
{
  Node *newnode;
  if(f->data<s->data)
  {
    newnode=f;
    third=f;
    f=f->next;
    third->next=NULL;

  }
  else
  {
    newnode=s;
    third=s;
    s=s->next;
    third->next=NULL;
  }

  while(f!=NULL && s!=NULL)
  {
    if(f->data<s->data)
    {
      newnode->next=f;
      newnode=f;
      f=f->next;
      newnode->next=NULL;
    }
    else
    {
      newnode->next=s;
      newnode=s;
      s=s->next;
      newnode->next=NULL;
    }
  }
  if(f)
  {
    newnode->next=s;
  }
  if(s)
  {
    newnode->next=f;
  }
}

int main()
{
  int arr[]{1,3,5,7,9};
  int n=sizeof(arr)/sizeof(arr[0]);
  create1(arr,n);
  display1(first);
  int arr2[]{2,4,6,8,10};
  int n2=sizeof(arr2)/sizeof(arr2[0]);
  create2(arr2,n2);
  display1(second);
  concatlinkedlist(first,second);
  display1(third);

}
