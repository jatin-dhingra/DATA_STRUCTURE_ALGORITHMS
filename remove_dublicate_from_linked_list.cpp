#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
};
Node* first=nullptr;

void create(int arr[],int n)
{
    Node *t,*last;
    first=new Node;
    first->data=arr[0];
    first->next=NULL;
    last=first;
    for(int i{1};i<n;i++)
    {
      t=new Node;
      t->data=arr[i];
      t->next=NULL;
      last->next=t;
      last=t;

    }

}

void remove(Node *p)
{
  Node *q= p->next;
  while(q!=NULL)
  {
    if(p->data!=q->data)
    {
      p=q;
      q=q->next;
    }
    else
    {
      p->next=q->next;
      delete q;
      q=p->next;
    }
  }
}

void display( Node *p)
{
  while(p!=NULL)
  {
    cout<<p->data<<"->";
    p=p->next;

  }
  cout<<"NULLPTR";
}

int main()
{
  int arr[]={1,3,3,6,6,9};
  int n=sizeof(arr)/sizeof(arr[0]);
  create(arr,n);
  remove(first);
  display(first);
}
