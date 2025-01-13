#include<iostream>
#include<vector>
#include<forward_list>
using namespace std;

int main(){

//forword Itreator
forward_list<int> list;

list.push_front(20);
list.push_front(30);
list.push_front(30);
list.push_front(40);

//travers using iterator
forward_list<int>::iterator it = list.begin();

while(it != list.end()){
  // cout << *it << " ";
 (*it) = (*it) + 5;
  it++;
}
it = list.begin();
while(it != list.end()){
  cout << *it << " ";
  it++;
}


//Itreator 
  // vector<int> arr;
  // arr.push_back(20);
  // arr.push_back(30);
  // arr.push_back(40);
  // arr.push_back(50);

  // vector<int>::iterator it  = arr.begin();

  // //create itreator
  // while(it != arr.end()){
  //    cout << *it <<" ";
  //    it++;
  // }

  return 0;
}