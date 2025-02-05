//missing number

#include<iostream>
#include<vector>

using namespace std;

int missingNumber(vector<int>&nums,int  n){
  int s = 0, e = n-1;
  int ans = -1;

  while(s<=e){
    int mid = s + (e-s)/2;

    int diff = nums[mid]-mid;
    if(diff == 1){
      ans = mid;
      e = mid-1;
    }
    else if(diff == 0){
      s = mid + 1;
    }
  }
  if(ans == -1){

    return n;
  }
  return ans;
}

int main(){

 vector<int>nums = {9,6,4,2,3,5,7,0,1};
 int n = nums.size();

int arr[] = sort(nums.begin(), nums.end());
int ans = missingNumber(nums, n);
cout<<"Missing number is : "<<ans<<endl;


  return 0;
}