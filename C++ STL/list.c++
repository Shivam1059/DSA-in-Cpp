//List STL in  Cpp
#include<iostream>
#include<list>    // add list STL
using namespace std;

int main(){

list<int> first;
first.push_back(20);
first.push_back(40);
first.push_back(60);
first.push_back(80);

cout<<" Befor : list "<<endl; 
list<int>::iterator it = first.begin();

while(it != first.end()){
  cout<< *it << " ";
  it++;
}cout<<endl;

list<int>second;
second.push_back(100);
second.push_back(200);
second.push_back(300);
second.push_back(400);

 cout<<"after list "<<endl;
first.swap(second);

list<int>::iterator itm = first.begin();

while(itm != first.end()){
  cout<< *itm << " ";
  itm++;
}cout<<endl;
 
 /*

//create
list<int>myList;


//insertion
myList.push_back(10);
myList.push_back(20);
myList.push_back(30);
myList.push_back(40);

myList.push_front(100);
myList.push_front(200);
myList.push_front(300);

cout<<"front value of list :  "<<myList.front()<<endl;
cout<<"back value of list  : "<<myList.back()<<endl;

//remove fun
myList.remove(200);


// itreate our list
list<int>::iterator it = myList.begin();

while(it != myList.end()){
  cout << *it <<" ";
  it++;
}cout<<endl;

//cheak size
cout<<myList.size()<<endl;

//deletion
myList.pop_back(); //remove list vlaue from back 
myList.pop_front();//remove  list vlaue from back 

//cheak size
cout<<myList.size()<<endl;

 */ 
  return 0;
}