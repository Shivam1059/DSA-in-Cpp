//COUNT ZERO's

#include<iostream>
#include<vector>
using namespace std;

int countZero(vector<vector<int>>nums){
   int row = nums.size();
   int col = nums[0].size();
   int count = 0;


   for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      if(nums[i][j] == 0)
      count++;
    }
  } 
   return count;
}
  
 

int main(){


 vector<vector<int>>nums = {{0,0,0},{0,0,1},{0,1,1}};
   int row = nums.size();
   int col = nums[0].size();
   
 
  int ans = countZero(nums);
  cout<<ans;
  
  return 0;
}


