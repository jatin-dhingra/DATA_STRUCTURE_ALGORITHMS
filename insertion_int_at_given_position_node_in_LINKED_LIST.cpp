#include <bits/stdc++.h>
using namespace std;

class Node{

public:
  int data;
  Node *next;

};
Node *first=nullptr;
void create(int arr[],int n,int number,int pos)
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
    Node *t=new Node;
    t->data=number;
    x=first;
    for(int i{};i<pos-1;i++)
    {
      x=x->next;
    }
    t->next=x->next;
    x->next=t;


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
  int number;
  cout<<"enter number to be inserted: ";
  cin>>number;
  cout<<endl;
  int pos;
  cout<<"enter position to be inserted: ";
  cin>>pos;
  cout<<endl;
  create(arr,n,number,pos);
  display(first);

}
