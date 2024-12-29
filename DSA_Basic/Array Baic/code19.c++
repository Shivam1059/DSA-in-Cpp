//check  Two sum - pair with give targe;
#include<iostream>
#include<algorithm>
using namespace std;

//simple method 
// bool twoSum(int arr[], int n , int target){
//   for(int i=0; i<n; i++){
//     for(int j = i+1; j<n; j++){
//       if(arr[i]+arr[j] == target)
//         return true;
//     }
//   }
//   return false;
// }


// Using twoPointer Approach
bool towSumPointerApproach(int arr[], int n, int target){
  int left = 0;
  int right = n-1;;
  int sum = 0;
  while( left < right){
    int sum = arr[left] + arr[right];

    if( sum == target){
      return true;
    } else if( sum < target){
      left ++;
    }
    else{
      right --;
    }
  }
   return false;
}
int main(){

 int arr[6] = {1,4,45,6,10,8};
 int n = 6;
 int target = 16;

sort(arr, arr+n);

// int ans = twoSum(arr, n, target);
// cout<<ans<<endl;

int ans = towSumPointerApproach(arr,n, target);
cout<<ans<<endl;

  return 0;
}
