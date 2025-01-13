#include<iostream>
#include<list>
#include<vector>
#include<forward_list>
using namespace std;

int main(){
//Romdam Access Itreator
vector<int>arr= {10,20,30,40,50};

// vector<int>::iterator it = arr.begin();

// while(it != arr.end()){
//   //write
//   *it = *it + 7;
//   //read
//   cout<< *it << " ";
//   //forward move;
//   it++;

// }

//let's try backword movement in vector 
// vector<int>::iterator it = arr.end();
//  while( it != arr.begin()){
//    it--;
//    cout<< *it <<endl;
//  }


//random access iterator
vector<int>::iterator it = arr.begin() + 3;
cout<< *it <<endl;




//bi-directional Iterator
// list<int> mylist;
// mylist.push_back(10);
// mylist.push_back(20);
// mylist.push_back(30);

//treaverse  using iterator
// list<int>::iterator it = mylist.begin();

// while(it != mylist.end()){
//   //writing
//   (*it) = (*it) + 2;
// //read
//   cout<< (*it) << " ";
//   //forward move
//   it++;
// }


//let's try moving backward in list
// list<int>::iterator it = mylist.end();

// while( it != mylist.begin()){
//   it--;
//   cout<< *it << " ";
// }




//forword Itreator
// forward_list<int> list;

// list.push_front(20);
// list.push_front(30);
// list.push_front(30);
// list.push_front(40);

//travers using iterator
// forward_list<int>::iterator it = list.begin();

// while(it != list.end()){

//  (*it) = (*it) + 5;
//   it++;
// }
// it = list.begin();
// while(it != list.end()){
//   cout << *it << " ";
//   it++;
// }


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