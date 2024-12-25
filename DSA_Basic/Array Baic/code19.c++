//cheak array is sorted or not sorted 

#include<iostream>
using namespace std;

int checkVector(int nums[], int size){
  int arr = nums[0];
  for(int i=0; i<size; i++){
   if(arr<nums[i]){
    return true;
   }
   else{
    return false;
   }
}
}
int main(){

int nums[] =  {3,4,5,1,2};
int n = 5;

int ans = checkVector(nums,n);

for(int i=0; i<n; i++){
  cout<<ans<<" ";
}
  return 0;
}