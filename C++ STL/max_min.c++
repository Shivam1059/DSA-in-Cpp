
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

  vector<int> arr;
  arr.push_back(10);
  arr.push_back(20);
  arr.push_back(30);
  arr.push_back(40);
  arr.push_back(510);

auto it = min_element(arr.begin(), arr.end());
cout<< *it <<endl;

auto its = max_element(arr.begin(), arr.end());
cout<< *its <<endl;

  //2 number -> compare
  int a = 10; 
  int b = 20;
  cout<<max(a,b)<<endl;
  cout<<min(a,b)<<endl;



  return 0;
}
