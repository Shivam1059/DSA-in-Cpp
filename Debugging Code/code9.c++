//Debug the code.
#include<iostream>
#include<vector>

using namespace std;
int binarySearch(vector<int>& nums, int target) {
        int left = 0, right = int(nums.size());
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] <= target) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        
        if (left > 0 and nums[left - 1] == target) {
            return left - 1;
        } else {
            return -1;
        }
    }


// int binarySearch(vector<int>& nums, int target) {
//     int left = 0, right = nums.size()-1;
//     while(left <= right){
//       int mid = left + (right - left)/2;

//       if(nums[mid]==target){ 
//         return mid;
//       }
//       if(target > nums[mid]){
//          left = mid + 1;
//       }
//       else {
//          right  = mid - 1;  
//       }  
//     }
//     return -1;
   
// }

int main(){

 vector<int>nums = {10,20,30,40,50,60,70,80};
 int target = 30;

 int ans = binarySearch(nums, target);
 cout<<" Tragte is : "<<ans;

  return 0;
}