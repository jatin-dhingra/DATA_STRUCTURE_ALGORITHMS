#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
  int data;
  Node *next=NULL;
};
Node *first=NULL;

void create(int arr[],int n)
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

void deletefirst(Node *p)
{
  Node *t=new Node;
  first=first->next;
  delete t;
}

void display(Node *p)
{
  while(p!=NULL){
    cout<<p->data<<" ";
    p=p->next;
  }
}

int main()
{
  int arr[]={1,3,5,7,9};
  int n=5;
  create(arr,n);
  deletefirst(first);

  display(first);
}
