//Debug the code. Find minimum in rotated sorted array. (Sorting was in ascending order).

// #include<iostream>
// #include<vector>
// using namespace std;

// int findMin(vector<int>& nums) {
//         int start = 0, end = nums.size()-1, ans = start;
//         while(nums[start] > nums[end]) {
//             int mid = (start + end) >> 1;
//             if(nums[mid] <= nums[start] && nums[mid] <= nums[end]) 
//                 end = mid;

//             else if(nums[mid] >= nums[start] && nums[mid] >= nums[end])
//                 start = mid + 1;   

//             else {
//             return nums[mid];
//             ans = start;
//             } 
//         }
//         return nums[ans];
//     }

// int main(){
//   vector<int>nums =  {50,60,70,80,10,20,30,40,50};
//   int ans = findMin(nums);
//   cout<<" Minimum value is : "<<ans;
// }


//new method
// #include<iostream>
// #include<vector>
// #include <bits/stdc++.h>
// #include<algorithm>
// using namespace std;

// int findMin(vector<int>&nums,int n){

//    int low = 0, high = n-1;
//    int ans = INT_MAX;

//    while(low <= high){
//      int mid = low + (high - low)/2;
    

//      if(nums[low] <= nums[mid]){
//          ans = min(ans, nums[low]);
//          low = mid + 1;
//      }else{
//         ans = min(ans, nums[mid]);
//         high = mid -1;
//      }
//    }
//    return ans;
// }

// int main(){

//   vector<int>nums = {50,60,70,80,10,20,30,40,50};
//   int n = nums.size();

//   int ans = findMin(nums,n);
//   cout<<" Mini : "<<ans;

//   return 0;
// }