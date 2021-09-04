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

  int x=INT_MIN;
  Node *p=first;
  while(p!= NULL)
  {
      if(p->data>=x)
      {
        x=p->data;
        p=p->next;
      }
      else
      {
        break;
      }
  }

  if(p==NULL)
  {
    cout<<"sorted"<<endl;
  }
  else
  {
    cout<<"Not Sorted"<<endl;
  }


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
  int arr[]{1,3,3,7,9};
  int n=5;
  int pos{};

  create(arr,n,pos);
  //display(first);
}
