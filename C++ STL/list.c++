//List STL in  Cpp
#include<iostream>
#include<list>    // add list STL
using namespace std;

int main(){

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


//cheak size
cout<<myList.size()<<endl;

//deletion
myList.pop_back(); //remove list vlaue from back 
myList.pop_front();//remove  list vlaue from back 

//cheak size
cout<<myList.size()<<endl;

  return 0;
}