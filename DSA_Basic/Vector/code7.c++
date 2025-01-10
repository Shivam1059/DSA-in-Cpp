//Majority Element II

#include<iostream>
#include<vector>

using namespace std;
int majorityElement2(vector<int>nums){
int n = nums.size();  
int count = 0;
for(int i=0; i<n; i++){
  count = nums[i];
  if(count == nums[i]){
    count++;
  }
  else if(count > n/3){
    return nums[i];
  }
}

}

int main(){
vector<int>nums = {1};
int n = nums.size();

int ans = majorityElement2(nums);
cout<<ans;

  return 0;
}
