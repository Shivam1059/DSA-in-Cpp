//Find first and last occurence of array element

#include<iostream>
#include<vector>

using namespace std;

int firstOccur(vector<int>nums, int n, int target){

 int ans = -1;
  int st = 0, end = n-1;
  while(st <= end){
    int mid = st + (end - st)/2;

    if(nums[mid] == target){
         ans = mid;
         st = mid + 1;
    }
    else if( target > nums[mid]){
        st = mid + 1;
    }
    else {
        end = mid -1;  
    }
  }
  return ans;
}  
  
int lastOccur(vector<int>nums, int n, int target){
    int ans = -1;
  int st = 0, end = n-1;
  while(st <= end){
    int mid = st + (end - st)/2;

    if(nums[mid] == target){
         ans = mid;
         end = mid - 1;
    }
    else if( target > nums[mid]){
        st = mid + 1;
    }   
    else{
        end = mid -1;  
    }
  }
  return ans ;

}
  vector<int>searchRange(vector<int> &nums, int target){
    int n = nums.size();
    vector<int>result(2,-1);
    result[0] = firstOccur(nums,n,target);
    result[1] = lastOccur(nums,n,target);
     return result;
  }

int main(){

  vector<int>nums = {1,3,5,5,5,5,7,123,125};
  int n = nums.size();
  int target = 5;

  vector<int> result = searchRange(nums, target);

    cout << "First occurrence: " << result[0] << endl;
    cout << "Last occurrence: " << result[1] << endl;



  return 0;
}
