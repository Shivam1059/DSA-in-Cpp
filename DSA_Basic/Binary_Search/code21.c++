//Leetcode - 724   =>Find Pivot Index

#include<iostream>
#include<vector>
using namespace std;

int pivotIndex(vector<int>& nums) {
  int n = nums.size();
  int start = 0;
  int end = n-1;
 int PivotIndex = -1; 
 int  left_sum = 0;
 int right_sum = 0;
  while( start <= end ){
    int mid = start + (end - start)/2;
     for(int i=0; i<mid; i++){
        left_sum += nums[i];
     }   
     for(int i= mid+1 ; i<n; i++){
        right_sum += nums[i];
     } 
     if(left_sum == right_sum){
         PivotIndex =  mid;
         return PivotIndex;
     }
   
  }
  return -1;
   
}

int main(){
 
  vector<int>nums = {1,7,3,6,5,6};
  int ans = pivotIndex(nums);
  cout<<"Pivot index is = "<<ans;
  return 0;
}
