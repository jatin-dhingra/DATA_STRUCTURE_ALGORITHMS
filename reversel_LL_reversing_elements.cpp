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

void display( Node *p)
{
  int arr[6];
  int i{};
  while(p!=NULL)
  {
    arr[i]=p->data;
    p=p->next;
    i++;
  }
  p=first;
  i--;
  while(p!=NULL)
  {
    p->data=arr[i];
    p=p->next;
    i--;
  }
  p=first;
  while(p!=NULL)
  {
    cout<<p->data<<" ";
    p=p->next;
  }
}

int main()
{
  int arr[]={1,2,3,5,6,9};
  int n=sizeof(arr)/sizeof(arr[0]);
  create(arr,n);

  display(first);
}
