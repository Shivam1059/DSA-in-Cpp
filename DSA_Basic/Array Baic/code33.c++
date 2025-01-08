//Max Consecutive Ones

// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;

// int main(){
 
//  vector<int>nums = {1,1,0,1,1,1};
//  int n = nums.size();
//  int count = 0;
//  int maxi = 0;
//  for(int i=0; i<n; i++){
//   if(i == nums[i]){
//       count++;
//       maxi = max(maxi,count);
//     } 
//     else{
//       count = 0;
//     }
//    }
//    cout<<maxi<<" ";
 


//   return 0;
// }



//Find the k' th smallest element in array
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
   vector<int>arr = {7,10,4,3,20,15};
   int n = arr.size();
   int k = 3;
   sort(arr.begin(), arr.end());
   for(int i=0; i<n; i++){
      if(arr[i] == k){
        cout<<arr[i]<<" ";
      }
   }

  return 0;
}

