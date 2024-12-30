// //find missing number in array

// #include<iostream>
// #include<algorithm>
// using namespace std;

// int missingNumber(int nums[], int size){
//   sort(nums, nums+size);
//   for(int i=0; i<size; i++){
//     if( i == nums[i]) continue;
//     else 
//         return i;
//   }

//   return size;
// }

// int main(){
 
//   int nums[9] = {0,2,3,5,4,9,7,6,1};
//   int size = 9;

// int ans = missingNumber(nums,9);
// cout<<ans; 



//   return 0;
// }

//peroble Sort Color or Dutch Plag algorithum

#include<iostream>
#include<vector>
 using namespace std;

 int sortColor(vector<int>nums){
   int n = nums.size();
   int low = 0, mid = 0, high = n-1;
   while(mid <= high){
      if(nums[mid] == 0)
        swap(nums[low++], nums[mid++]);
      else if(nums[mid] == 1)
         mid++;
      else
          swap(nums[mid], nums[high--]);
     }
    for(int i=0; i<n; i++){
      cout<<nums[i]<<" ";
    }
    cout<<endl;
  }

 int main(){
  vector<int>nums = {2,0,2,1,1,0};
  int n = nums.size();

  int ans = sortColor(nums);
  cout<<ans<<" ";


  return 0;
 }