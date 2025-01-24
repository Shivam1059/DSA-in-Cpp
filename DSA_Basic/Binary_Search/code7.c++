//Pivot value 
#include<iostream>
#include<vector>
using namespace std;



int getPivotIndex(vector<int>& nums) {
    int n = nums.size();
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e) { // Corrected condition
        mid = s + (e - s) / 2; // Ensure mid is updated inside the loop

        if (nums[mid] > nums[mid + 1]) {
            return mid;
        } else if (nums[mid] < nums[s]) {
            e = mid;
        } else {
            s = mid + 1;
        }
    }

    return s; // Pivot index is where s == e
}

int binarySearch(int s, int e, int target, vector<int>& nums) { // Fixed vector reference
    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (nums[mid] == target) {
            return mid;
        }

        if (target > nums[mid]) {
            s = mid + 1; // Fixed increment
        } else {
            e = mid - 1; // Fixed decrement
        }
    }

    return -1;
}

int search(vector<int>& nums, int target){
    if (nums.empty()) return -1; // Edge case for empty array

    int pivotIndex = getPivotIndex(nums);
    int n = nums.size();

    if (target >= nums[0] && target <= nums[pivotIndex]) {
        return binarySearch(0, pivotIndex, target, nums);
    } else {
        return binarySearch(pivotIndex + 1, n - 1, target, nums);
    }
     return -1;
  }

int main(){

vector<int>nums = {4,5,6,7,0,1,2};
int   target = 0;

int result = search(nums, target);

cout<<" Traget found at index : "<<result <<endl;


   
   return 0;
   
 }