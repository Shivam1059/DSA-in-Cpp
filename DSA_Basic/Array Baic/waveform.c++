//Wright a array in wave form
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){

  vector<int> nums = {1,2,3,4,5};
  int n = nums.size();

//  sort(nums.begin(), nums.end());

  // for(int i=0; i<n; i++){
  //   int temp  = 0;
    for(int i=0; i<n-1; i=i+2){
      swap(nums[i], nums[i+1]);
        // temp = nums[i];
        // nums[i] = nums[j];
        // nums[j] = temp;
    }
  // }

  for(int i=0; i<n; i++){
    cout<<nums[i]<<" ";
  }


  return 0;
}
