#include <bits/stdc++.h>
using namespace std;

#define MAX  100000
class Stack
{
  int top;
public:
  int arr[MAX];
  Stack(){
    top=-1;
  }
  bool push(int x);
  int pop();
  int peek();
  bool isempty();
  void display();
};

bool Stack::push(int x)
{
  top++;
  arr[top]=x;
  if(top>=MAX-1)
  {
    cout<<"OVERFLOW"<<endl;
  }

}

int Stack::pop()
{
  if(top<0)
  {
    cout<<"Stack empty;"<<endl;
  }
  else{
    int x=arr[top];
    top--;
    return x;
  }
}

int Stack::peek()
{
  if(top<0)
  {
    cout<<"Empty stack";
  }
  else{
    int x=arr[top];
    return x;
  }
}

bool Stack::isempty()
{
  return top<0;
}

void Stack::display()
{
  for(int i=top;i>=0;i--)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int main()
{
 class Stack s;
 s.push(10);
 s.push(5);
 s.push(11);
 s.push(18);
 cout<<"pop element"<<s.pop()<<endl;
 cout<<"Peek element "<<s.peek()<<endl;
 s.display();

 cout<<s.isempty();
 //display();

  return 0;
}
