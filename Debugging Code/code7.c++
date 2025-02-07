//Debug the code. A peak element is an element that is strictly greater than its neighbors. Find the peak element.

#include<iostream>
#include<vector>
using namespace std;

// int findPeakElement(vector<int>& nums) {
//        int n = nums.size();
//        int start = 0;
//        int end = n -1;
//        while(start < end){
//           int mid = start + (end -start)/2;
//           if( nums[mid - 1] < nums[mid] && nums[mid] > nums[mid + 1])  return mid;

//           if(nums[mid - 1] < nums[mid]){
//              start = mid +1 ;
//           }
//           else
//              end = mid -1;  
//        }
      
//   }

  int findPeakElement(vector<int>& nums) {

        int n = nums.size();
        int low = 0;
        int high = n-1;
        while(low < high){
            int mid = (low + high)>>1;
            
            if(nums[mid - 1] < nums[mid] && nums[mid]> nums[mid + 1]) return mid;

            if(nums[mid - 1] < nums[mid])
             low = mid + 1;
            else  
            high = mid - 1; 
        }
    }


int main(){

 vector<int>nums = {50,60,70,10,20,30,40};
 int ans = findPeakElement(nums);
 cout<<" Peak Index : "<<ans;

  return 0;
}