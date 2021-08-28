#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
};
Node *first=nullptr;

void create(int arr[], int n)
{
  Node *p,*last;
  first=new Node;
  first->data=arr[0];
  first->next=NULL;
  last=first;

  for(int i{1};i<n;i++)
  {
    p=new Node;
    p->data=arr[i];
    p->next=NULL;
    last->next=p;
    last=p;
  }
}


void display(Node *p)
{
  while(p!=0)
  {
    cout<<p->data<<"->";
    p=p->next;
  }
}

void sorted(Node *p,int num)
{
  Node *t, *q=NULL;
  t=new Node;
  t->data=num;
  t->next=NULL;
  if(first==NULL)
  {
    first=t;
  }
  else
  {
    while(p && p->data<num)
    {
      q=p;
      p=p->next;
    }
    if(p==first)
    {
      t->next=first;
      first=t;
    }
    else
    {
      t->next=q->next;
      q->next=t;
    }
  }
}

int main()
{
  int arr[]={1,3,5,7,9};
  int n=5;
  create(arr,n);
  int num;cin>>num;
  sorted(first,num);
  display(first);
}
