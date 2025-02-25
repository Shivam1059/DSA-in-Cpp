// Find the maximum point you can obtain from Card ,
//condition -> 1) Do not take direct mid elements,
 //            2)allow only take element start and end ,

 #include<iostream>
 #include <algorithm>
 #include<vector>
 using namespace std;

 int maxSum(vector<int>& nums, int k) {
  int n = nums.size();
  int leftSum = 0, rightSum = 0, maxSum = 0;

  // Compute initial sum from the first k elements (left sum)
  for (int i = 0; i < k; i++) {
      leftSum += nums[i];
  }

  maxSum = leftSum; // Set initial max sum as the left sum

  // Start removing elements from the left and adding from the right
  for (int i = 0; i < k; i++) {
      leftSum -= nums[k - 1 - i];  // Remove last element from left sum
      rightSum += nums[n - 1 - i]; // Add new element from the right
      maxSum = max(maxSum, leftSum + rightSum); // Update max sum
  }

  return maxSum;
}


 int main(){

 vector<int>nums = {6,2,3,4,7,2,1,7,1};
 int k = 4;

 int ans = maxSum(nums,k);
 cout<<" Maxsum : "<<ans;
  return 0;
 }
