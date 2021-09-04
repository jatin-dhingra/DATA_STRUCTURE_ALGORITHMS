#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
};
Node* first=NULL;

void create(int arr[],int n,int pos)
{
  Node *t, *last;
  first=new Node;
  first->data=arr[0];
  first->next=NULL;
  last=first;
  for(int i=1;i<n;i++)
  {
    t=new Node;
    t->data=arr[i];
    t->next=NULL;
    last->next=t;
    last=t;
  }
  Node *p=first;
  Node *q=NULL;
  //*p=first; *q=NULL;
  for(int i=0;i<pos-1;i++)
  {
    q=p;
    p=p->next;
  }
  q->next=p->next;
  delete p;


}

void display(Node *x)
{
  while(x!=NULL)
  {
    cout<<x->data<<" ";
    x=x->next;
  }
}

int main()
{
  int arr[]{1,3,5,7,9};
  int n=5;
  int pos{};
  cin>>pos;
  create(arr,n,pos);
  display(first);
}
