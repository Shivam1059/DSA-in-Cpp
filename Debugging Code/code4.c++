//leetcode 33    search in Rotated sorted array
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int getPivatIndex(vector<int>&nums){
  int n = nums.size();
  int s = 0, e = n-1 ;

  while(s <= e){
    int mid = s + (e -s)/2;

    if(nums[mid] < nums[mid-1])
       return mid -1 ;
    if(nums[mid] > nums[mid + 1])  
      return mid;
    else 
      return mid + 1;
  }
  return -1;
}

int binarySearch(vector<int>nums, int s, int e, int target){
  while(s <= e){

  int mid = s + (e -s)/2;
    if(nums[mid] == target)
      return mid;

    else if(target > nums[mid])
      s = mid + 1;
    else 
      e = mid -1;
  }
  return -1;
}

int search(vector<int>& nums, int target) {
    if (nums.empty()) return -1;

    int pivotIndex = getPivatIndex(nums);
    int n = nums.size();

    if (pivotIndex == -1) // No rotation, normal binary search
        return binarySearch(nums, 0, n - 1, target);

    if (target >= nums[0] && target <= nums[pivotIndex])
        return binarySearch(nums, 0, pivotIndex, target);
    else
        return binarySearch(nums, pivotIndex + 1, n - 1, target);
}


int main(){
  vector<int>nums = {4,5,6,7,0,1,2};
  int target = 6;

 
 int ans = search(nums, target);
 cout<<" Traget value is : "<<ans;
  return 0;
}