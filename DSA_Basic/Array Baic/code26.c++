// return maximum subarray

#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int main(){
 

vector<int>nums = {-2,1,-1,4,-1,2,1,-5,4};
int n = nums.size();
int currSum  = 0;
int maxSum = INT_MIN;
for(int i=0; i<n; i++ ){
   currSum  +=  nums[i];
   maxSum = max(currSum, maxSum);
   if(currSum < 0){
    currSum = 0;
   }
}
   cout<<maxSum<<" ";

  return 0; 
}
