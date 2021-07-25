#include <bits/stdc++.h>
using namespace std;

class Node{

public:
  int data;
  Node *next;

};
Node *first=nullptr;
void create(int arr[],int n)
{
    Node *x, *last;
    first = new Node;
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

void insertion(int arr[],int n,int number)
{
  Node *x, *last;
  first = new Node;
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
  Node *t=new Node;;
  t->data=number;
  t->next=first;
  first=t;

}

void display(Node *p)
{
  while(p!=NULL)
  {
    cout<<p->data<<"->";
    p=p->next;
  }
}


int main()

{
  int arr[]{1,2,4,5,6};
  int n=sizeof(arr)/sizeof(arr[0]);
  create(arr,n);
  int number;
  cout<<"enter the element to be inserted before first node: ";
  cin>>number;
  insertion(arr,n,number);

  display(first);


}
