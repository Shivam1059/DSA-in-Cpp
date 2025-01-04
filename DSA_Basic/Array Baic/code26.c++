// // return maximum subarray

// #include<iostream>
// #include<climits>
// #include<vector>
// using namespace std;

// int main(){
 

// vector<int>nums = {-2,1,-1,4,-1,2,1,-5,4};
// int n = nums.size();
// int currSum  = 0;
// int maxSum = INT_MIN;
// for(int i=0; i<n; i++ ){
//    currSum  +=  nums[i];
//    maxSum = max(currSum, maxSum);
//    if(currSum < 0){
//     currSum = 0;
//    }
// }
//    cout<<maxSum<<" ";

//   return 0; 
// }


// Array Leaders problem in gfg;
#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;


void  leaderArray(vector<int>arr, int n){
  vector<int>nums;
  int m = nums.size();
  int maxi = INT_MIN;

  for(int i=n-1; i>=0; i--){
    if(arr[i] >= maxi){
      nums.push_back(arr[i]);
      maxi = arr[i];
    }
  }
  reverse(nums.begin(), nums.end());
  for(int leader : nums){
    cout<<leader<<" ";
  }

  }

int main(){

vector<int>arr = {16,17,4,3,5,2};
int n = arr.size();

leaderArray(arr,n);


  return 0;
}