#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
};
Node *first;

void create(int arr[],int n)
{
    Node *t,*last;
    first=new Node;
    first->data=arr[0];
    first->next=NULL;
    last=first;
    for(int i{1};i<n;i++)
    {
      t= new Node;
      t->data=arr[i];
      t->next=NULL;
      last->next=t;
      last=t;
    }
}
void display(Node *p){
  if(p!=0){
    display(p->next);
    cout<<p->data<<"<-";
    
  }

  if(p==0){
    cout<<" ";
  }

}

int main()
{
  int arr[]={1,3,5,7,9,11};
  int n=sizeof(arr)/sizeof(arr[0]);
  create(arr,n);
  display(first);
}
