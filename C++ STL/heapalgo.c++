
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
 
  vector<int> arr;
  arr.push_back(22);
  arr.push_back(30);
  arr.push_back(56);
  arr.push_back(40);
  arr.push_back(50);
 

  make_heap(arr.begin(), arr.end());
  
  // for(int a : arr){
  //   cout << a << " ";
  // }cout<<endl;

//insertion
  // arr.push_back(90);
  // push_heap(arr.begin(), arr.end());
  // for(int a : arr){
  //   cout<< a << " ";
  // }cout<<endl;

//deletion
// pop_heap(arr.begin(), arr.end());  //remove 90
// arr.pop_back();

  // for(int a : arr){
  //   cout<< a << " ";
  // }cout<<endl;


  sort_heap(arr.begin(), arr.end());
  for(int a : arr){
    cout<< a << " ";
  }cout<<endl;

  return 0;
}