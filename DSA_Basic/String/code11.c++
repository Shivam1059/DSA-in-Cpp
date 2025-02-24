#include<iostream>
#include<vector>
#include <climits> // For INT_MAX


using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
  int left = 0, n = nums.size();
  int minLength = INT_MAX;
  int currSum = 0;

  for(int i=0; i<n; i++){
      currSum += nums[i];

      while(currSum >= target){
        minLength = min(minLength, i-left + 1);
        currSum -= nums[left];
        left++;
      }
  }
  return (minLength == INT_MAX) ? 0: minLength;
}  

int main(){

  vector<int>nums = {2, 3, 1, 2, 4, 3};
  int target = 7;

int ans = minSubArrayLen(target,nums);
cout<<ans;

  return 0;
}