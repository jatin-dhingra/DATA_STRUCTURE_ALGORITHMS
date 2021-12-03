#include <bits/stdc++.h>
using namespace std;
int main()
{
  //vectors
  cout<<"vector"<<endl;
  vector<int>v;
  v.push_back(5);
  v.push_back(6);
  v.push_back(9);
  for(int i:v)
  {
    cout<<i<<" ";
  }cout<<endl;
  v.pop_back();
  for(int i:v)
  {
    cout<<i<<" ";
  }cout<<endl;
  cout<<v.size()<<endl;
  v.clear();
  cout<<v.size()<<endl;
  for(int i:v)
  {
    cout<<i<<" ";
  }

  vector<int>v1(10,5);
  for(int i:v1)
  {
    cout<<i<<" ";
  }cout<<endl;

  //sort()
  cout<<"sort"<<endl;
  vector<int>v3;
  v3.push_back(1);
  v3.push_back(5);
  v3.push_back(3);
  v3.push_back(8);
  v3.push_back(6);
  for(int i:v3)
  {
    cout<<i<<" ";
  }cout<<endl;
  cout<<"after sort"<<endl;
  sort(v3.begin(),v3.end());
  for(int i:v3)
  {
    cout<<i<<" ";
  }cout<<endl;

  // pairs
  cout<<"pairs"<<endl;
  pair<string,int>p2={"jatin",5};
  cout<<p2.second<<" "<<p2.first<<endl;
  p2.first="dhingra";
  cout<<p2.second<<" "<<p2.first<<endl;

  // sorting pairs
  cout<<"sorting pairs"<<endl;
  pair<int,int>p[6];
  p[0]={1,4};p[1]={2,1};p[2]={1,2};p[3]={4,3};p[4]={5,7};p[5]={3,2};
  sort(p,p+6);
  //pair<int,int>::iterator it2;
  for(auto i:p)
  {
    cout<<i.first<<" "<<i.second<<endl;
  }

  //iterators
  cout<<"iterator"<<endl;
  vector<int>v5{10,13,15,9,17};
  //iterator;
  vector<int>::iterator it=v5.begin();
  //or
  auto it2=v5.begin();
  cout<<*it<<endl;
  it++;
  cout<<*it<<endl;
  cout<<*(it+3)<<endl;

  //set
  cout<<"set"<<endl;
  set<int>s;
  s.insert(1);
  s.insert(5);
  s.insert(7);
  s.insert(6);
  s.insert(2);
  s.insert(3);
  s.insert(9);
  for(auto i:s)
  {
    cout<<i<<" ";
  }
  cout<<endl;
  cout<<s.count(9)<<endl;
  cout<<s.count(10)<<endl;
  s.erase(9);
  cout<<s.count(9)<<endl;

  //set iterator
  cout<<"set iterator"<<endl;
  set<int>::iterator it3;
  // int search=3;
  // it3=find(s.begin(),s.end(),search);
  // cout<<it3-s.begin()<<endl;


  //map
  cout<<"maps"<<endl;
  map<int,int>m;
  int arr[8]{1,4,5,5,6,7,7,9};
  for(int i{};i<8;i++)
  {
    m[arr[i]]++;
  }
  for(auto i:m)
  {
    cout<<i.first<<" "<<i.second<<endl;
  }
  //m.clear();
  //m[2];
  cout<<m.size()<<endl;











}
