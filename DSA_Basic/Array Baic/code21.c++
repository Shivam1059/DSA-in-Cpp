//Move  zeroes
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
   vector<int>nums{1,2,0,4,3,0,5,0};
   int n = nums.size();
    
    int j=0; 
    for(int i=0; i<n; i++){
      if(nums[i] != 0){
        nums[j++] = nums[i];
      }
    }
    while(j<n){
      nums[j++] = 0;
    }
   

   for(int i=0; i<n; i++){
    cout<<nums[i]<<" ";
   }



//optinal method
// int j = 0;
// for(int i=0; i<n; i++){
//   if(nums[i]!=0){
//     swap(nums[j],nums[i]);
//     i++;
//   }
// }

//    for(int i=0; i<n; i++){
//     cout<<nums[i]<<" ";
//    }

  return 0;
}
