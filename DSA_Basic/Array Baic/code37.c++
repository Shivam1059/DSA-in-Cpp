// //Find Unique element in array

// #include<iostream>
// #include<algorithm>
// using namespace std;

// int unquecElement(int nums[]){
//   int n = 7;
//   sort(nums, nums+n);
//   int ans = -1;
//   int i = 0;
//   while(i<n){
//     if(i+1 < n && nums[i] == nums[i+1]){
//       i+=2;
//     }
//     else{
//       ans = nums[i];
//       break;
//     }
//   }
//   cout<<ans;
// }

// int main(){

//    int nums[] = {1,2,2,1,3,4,4};
//    int n = 7;

//   unquecElement(nums);
 
// }


//Q.2 Segregate 0's and 1s

#include<iostream>
using namespace std;

int main(){

int arr[] = {0, 0, 1, 1, 0};
int n = 5;

int low = 0;
int high = n-1;

while(low < high){
  if(arr[low] == 1 && arr[high] ==0){
    swap(arr[low], arr[high]);
    low++;
    high--;
  }
  else{
    if(arr[low] == 0)
      low++;
    if(arr[high]==1)
     high++; 
  }
 
}
for(int i=0; i<n; i++){
  cout<<arr[i]<<" ";
}
  return 0;
}