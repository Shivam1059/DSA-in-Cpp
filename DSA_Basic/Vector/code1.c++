//find largest element of vector

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

//  vector<int>v = {1,4,3,2,6,5};
//  int n = v.size();

//  reverse(v.begin(), v.end());
//  for(int i=0; i<n;i++){
//     cout<<v[i]<<" ";
//  }
 
 int n;
 cout<<" Enter the size of vector: ";
 cin>>n;

 vector<int>nums;

 cout<<"Enter the element  for vector : ";
 for(int i=0; i<n; i++){
   int element;
   cin>>element;
   nums.push_back(element);
 }


 int m = nums.size();
 cout<<"The element of vactor is : ";
 for(int i=0; i<m; i++){
   cout<<nums[i]<<" ";
 }

cout<<endl;

  return 0;
}