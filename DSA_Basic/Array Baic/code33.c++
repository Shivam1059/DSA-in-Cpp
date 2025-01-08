//Max Consecutive Ones

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
 
 vector<int>nums = {1,1,0,1,1,1};
 int n = nums.size();
 int count = 0;
 int maxi = 0;
 for(int i=0; i<n; i++){
  if(i == nums[i]){
      count++;
      maxi = max(maxi,count);
    } 
    else{
      count = 0;
    }
   }
   cout<<maxi<<" ";
 


  return 0;
}
