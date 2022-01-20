 #include <bits/stdc++.h>
 using namespace std;
 struct Node
 {
   int data{};
   struct Node *next;

 }*head;

 void create(int arr[],int n)
 {
   struct Node *t,*last;
   head=new Node;
   head->data=arr[0];
   head->next=head;
   last=head;
   for(int i=1;i<n;i++)
   {
     t=new Node;
     t->data=arr[i];
     t->next=last->next;
     last->next=t;
     last=t;
   }
 }

 void display(Node *p)
 {
   // static int check=0;
   // if(p!=head|| check==0)
   // {
   //   check=1;
   //   cout<<p->data<<" ";
   //   display(p->next);
   // }
   do{
     cout<<p->data<<" ";
     p=p->next;
   }while(p!=head);
 }

 int main()
 {
   int arr[]={1,2,8,5,6};
   int n=sizeof(arr)/sizeof(arr[0]);
   create(arr,n);
   display(head);
 }
