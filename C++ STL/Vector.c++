//Vector 1D array

#include<iostream>
#include<vector>
using namespace std;

int main(){
 
  //vector creation
  vector<int>mark;
  mark.push_back(40);
  mark.push_back(50);
  mark.push_back(60);
  mark.push_back(70);
  mark.push_back(90);

  mark.pop_back();
  mark[3] = 100; 

//access a value using square braket []  and also use we are "at.()";
  cout<< mark[1]<<endl;
  cout<< mark.at(2)<<endl;

//print start and ending value of vector 
  cout<< *(mark.begin()) <<endl;
  cout<<*(mark.end())<<endl;

  //size 
  cout<<"Size : " << mark.size()<<endl;

  //insert 
  mark.insert(mark.begin(),20);

  //capacity
  cout<<"capaccity : "<<mark.capacity()<<endl;
  cout<<"font value : "<<mark.front()<<endl;
  cout<<"back value : "<<mark.back()<<endl;


 cout<<" Ram is god"<<endl;
 cout<<mark.begin();

  //swap
  vector<int>first;
  vector<int>second;

  first.push_back(10);
  first.push_back(20);
  first.push_back(30);
  first.push_back(40);

  second.push_back(100);
  second.push_back(200);
  second.push_back(300);
  second.push_back(400);

  first.swap(second);

  //print using for each loop
  for(int i : first){
    cout<< i<< " "<<endl;
  }
  for(int i : second){
    cout<< i<< " "<<endl;
  }

  //print using itreator
  vector<int>::iterator it = first.begin();

  while(it != first.end()){
    cout<< *it <<" ";
    it++;
  }



//other type of declatreation
  // vector<int>marks(10);


  // vector<int>distance(15,2);
  // distance.push_back(20);
  // cout<< *(distance.begin()) <<endl;
  


  return 0;
}