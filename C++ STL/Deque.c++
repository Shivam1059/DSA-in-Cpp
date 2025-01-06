//Deque : "Double queue"

#include<iostream>
#include<queue>
using namespace std;

int main(){

deque<int> first_dq;
deque<int> second_dq;

first_dq.push_back(10);
first_dq.push_back(20);
first_dq.push_back(30);
first_dq.push_back(40);
cout<<first_dq.front()<<endl;

second_dq.push_back(100);
second_dq.push_back(200);
second_dq.push_back(300);
second_dq.push_back(400);

first_dq.swap(second_dq);
cout<<first_dq.front()<<endl;

/*

// create D-queue;
  deque<int> dq;
  //insertion
  dq.push_back(10);
  dq.push_back(20);
  dq.push_back(30);
  dq.push_back(40);
cout<<dq.size()<<endl;

//
  dq.push_front(100);
  dq.push_front(200);
  dq.push_front(300);
  dq.push_front(400);
  dq.push_front(500);
cout<<dq.size()<<endl;

//pop function
  dq.pop_front(); //front 
  dq.pop_back(); //back
  
cout<<dq.size()<<endl;
cout<<dq.front()<<endl;
cout<<dq.back()<<endl;


if(dq.empty() == true){
  cout<< " Deque is empty "<<endl;
}
else{
  cout<< " deque is not empty "<<endl;
}

// execess index value of using "[]""
cout<<" indexx value is : " <<dq[3]<<endl;
// execess index value of using "at"
cout<<" indexx value is : " <<dq.at(2)<<endl;

//clear all value of Dq.
// dq.clear();
cout<<dq.size()<<endl;

//earse value of dq
dq.erase(dq.begin(), dq.end());
cout<<dq.size()<<endl;




// deque<int> :: iterator it = dq.begin();
// while(it != dq.end()){
//   cout<< *it <<" ";
//   it++;
// }
*/
  return 0;
}

