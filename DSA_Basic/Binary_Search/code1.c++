//Binary Search

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


bool binarySerch(vector<int>nums,int n){
  int target = 8;
  int s = 0;
  int e = n-1;

  while(s <= e){
     int mid = s + (e-s)/2;

     if(nums[mid] == target)
        return true;

     else if(target > nums[mid])
       s = mid + 1;

     else if(target < nums[mid]){
      e = mid -1;  
     }
  }
  return false;
}

int main(){
  
  vector<int>nums = {2,3,4,5,6,7,8,9,90};
  int n = nums.size();
  int target = 8;

 
int ans  = binarySerch(nums,n);
cout<<ans;

//using C++ STL for Binary search
  // bool ans = binary_search(nums.begin(), nums.end(), target);
  // cout<<ans;

  return 0;
}