#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
  int data;
   Node *next;

};
Node* first=NULL;

void create(int arr[],int n)
{
  int i{};
  struct Node *t,*last;
  first=new Node;
  first->data=arr[0];
  first->next=NULL;
  last=first;
  for(i=1;i<n;i++)
  {
    t=new Node;
    t->data=arr[i];
    t->next=NULL;
    last->next=t;
    last=t;
  }
}

void display(struct Node *p)
{
  while(p!=NULL)
  {
    cout<<p->data<<"->";
    p=p->next;
  }cout<<"NULLPTR";
}

int main()
{
  int arr[]={1,3,5,7,9};
  int n=sizeof(arr)/sizeof(arr[0]);
  create(arr,n);
  display(first);
}
