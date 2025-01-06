//Largest subarray with 0 sum

#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

void longestSubArraywithZero(vector<int>nums){
  int n = nums.size();
  unordered_map<int, int> mpp;
  int maxlen = 0;
  int currSum = 0;

  for(int i=0; i<n; i++){
    currSum += nums[i];

    if(currSum == 0){
      currSum = i+1;
    }

    if( mpp.find(currSum) != mpp.end()){
      maxlen = max(maxlen, i-mpp[currSum]);
    }
    else{
      mpp[currSum] = i;
    }
  }
  
  cout<<"The longest subarray with 0 is len : "<<maxlen;
}


int main(){

  vector<int>nums = {15,-2,2,-8,1,7,10,23};
  int n = nums.size();

longestSubArraywithZero(nums);




  return 0;
}
