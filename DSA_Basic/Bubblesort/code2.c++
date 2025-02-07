//BobbleSort

#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int>&nums){
  int n = nums.size();
  for(int i=0; i<n-1; i++){
    for(int j=0; j<n-i-1; j++){
      if(nums[j] > nums[j+1])
       swap(nums[j], nums[j+1]);
    }
  }
}

print(vector<int>&nums){
  int n = nums.size();
  for(int i=0; i<n; i++){
    cout<<nums[i]<<" ";
  }
}
int main(){

vector<int>nums = {44,33,55,22,11};
bubbleSort(nums);
print(nums);

  return 0;
}