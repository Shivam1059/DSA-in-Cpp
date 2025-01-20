//find uniquec number 

#include<iostream>
using namespace std;

int main(){

 int nums[9] = {1,1,2,3,3,4,4,8,8};
 int n = 9;
 int ans = 0;

 for(int i=0; i<n; i+=2){
  if(i == n-1 || nums[i] != nums[i+1]) {
     ans = nums[i];
     break;
  }
 }
   cout<<" unique NUmber " <<ans <<endl;


  return 0;
}