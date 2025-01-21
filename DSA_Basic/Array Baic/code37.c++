//Find Unique element in array

#include<iostream>
#include<algorithm>
using namespace std;

int unquecElement(int nums[]){
  int n = 7;
  sort(nums, nums+n);
  int ans = -1;
  int i = 0;
  while(i<n){
    if(i+1 < n && nums[i] == nums[i+1]){
      i+=2;
    }
    else{
      ans = nums[i];
      break;
    }
  }
  cout<<ans;
}

int main(){

   int nums[] = {1,2,2,1,3,4,4};
   int n = 7;

  unquecElement(nums);
 
}