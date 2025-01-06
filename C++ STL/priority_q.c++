// Priority Queue
#include<iostream>
#include<queue>
using namespace std;

int main(){

priority_queue<int> first_pq;
priority_queue<int> second_pq;

first_pq.push(10);
first_pq.push(40);
first_pq.push(30);
first_pq.push(50);
first_pq.push(20);

second_pq.push(100);
second_pq.push(400);
second_pq.push(200);
second_pq.push(300);

cout<<first_pq.top()<<endl;
second_pq.pop();

first_pq.swap(second_pq);
cout<<first_pq.top()<<endl;

/* 
  //creation
  priority_queue<int> pq;
  //max -heap -> maximum value -> highest priority

  pq.push(10);
  pq.push(20);
  pq.push(50);
  pq.push(30);

  //Top of element
  cout<<pq.top()<<endl;


  //remove element on the bases of highest priority
  pq.pop();


  cout<<pq.top()<<endl;
  cout<<pq.size()<<endl;

  if(pq.empty() == true){
    cout<<" pq is empty"<<endl;
  }else{
    cout<<" pq is non-empty"<<endl;
  }
*/

  return 0;
}