//find missing number in array

#include<iostream>
#include<algorithm>
using namespace std;

int missingNumber(int nums[], int size){
  sort(nums, nums+size);
  for(int i=0; i<size; i++){
    if( i == nums[i]) continue;
    else 
        return i;
  }

  return size;
}

int main(){
 
  int nums[9] = {0,2,3,5,4,9,7,6,1};
  int size = 9;

int ans = missingNumber(nums,9);
cout<<ans; 



  return 0;
}