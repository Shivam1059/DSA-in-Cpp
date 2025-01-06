//Queue

#include<iostream>
#include<queue>
using namespace std;

int main(){

queue<int> first;
queue<int> second;

first.push(10);
first.push(20);
first.push(30);
first.push(40);

second.push(100);
second.push(200);
second.push(300);
second.push(400);

first.swap(second);
cout<<"front element in first queue : " <<first.front()<<endl;

/*
 //creation 
 queue<int> q;

//insertion
 q.push(10); //push operation
 q.push(20);
 q.push(30);
 q.push(40);
 
 //cheak queue size
 cout<< q.size() <<endl;

 q.pop(); //pop operation
 cout<< q.size() <<endl;

// font operation
cout<<" Front -> "<<q.front()<<endl;
// back operation
cout<<" back ->  "<<q.back()<<endl;


if(q.empty() == true){
  cout<<" queue is empty "<<endl;
}else{
  cout<< " queue is not empty" <<endl;
}

*/

  return 0;
}
