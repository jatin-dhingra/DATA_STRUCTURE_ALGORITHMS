#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node* prev;
  Node* next;
};
Node *first=NULL;

void create(int arr[],int n)
{
  Node *t,*last;
  first=new Node;
  first->data=arr[0];
  first->prev=NULL;
  first->next=NULL;
  last=first;
  for(int i{1};i<n;i++)
  {
    t=new Node;
    t->data=arr[i];
    t->next=last->next;
    t->prev=last;
    last->next=t;
    last=t;
  }
}

void insertfirst(int a,Node *p)
{
  Node* temp=new Node;
  temp->data=a;
  temp->prev=NULL;
  temp->next=first;
  first->prev=temp;
  first=temp;
}

void display(Node *p){
  while(p){
    cout<<p->data<<" ";
    p=p->next;
  }
}

int main()
{
  int arr[]{1,3,5,7,9};
  int n=5;
  create(arr,n);
  display(first);
  cout<<endl;
  insertfirst(11,first);
  display(first);

}
