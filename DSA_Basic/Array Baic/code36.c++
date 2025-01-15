//Two Sum II -input array is Sorted

#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<int> nums = {2,7,11,15};
int n = nums.size();
int target = 9;

int sum = 0;
int count = 0;
for(int i=0; i<n; i++){
  sum += nums[i];
  if(sum == target){
    count++;
  }
}
   cout<< count;

cout<<"Ram";

  return 0;
}