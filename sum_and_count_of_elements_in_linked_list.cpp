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

void display(Node *p)
{
  while(p!=0)
  {
    cout<<p->data<<"->";
    p=p->next;
  }
}

int summ (Node *p)
{
  METHOD1
  int s{};
  while(p!=0)
  {
    s+=(p->data);
    p=p->next;
  }
  return s;

  METHOD2
  int s{};
  if(p!=0)
  {
    return summ(p->next)+p->data;
  }
  else{
    return 0;
  }
}

int main()
{
  int arr[]{1,3,5,7,9,11,13};
  int n=sizeof(arr)/sizeof(arr[0]);
  create(arr,n);
  display(first);
  cout<<endl;
  cout<<summ(first);

}
