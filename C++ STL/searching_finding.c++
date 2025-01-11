
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

  vector<int>arr;

 arr.push_back(10);
 arr.push_back(20);
 arr.push_back(30);
 arr.push_back(40);
 arr.push_back(50);


//  int target = 40;
//  bool it = binary_search(arr.begin(), arr.end(), target);
//  cout<< it <<endl;

// auto it = lower_bound(arr.begin(), arr.end(), 35);
// cout << *it <<endl;

auto it = upper_bound(arr.begin(), arr.end(), 40);
cout<< *it <<endl;

}