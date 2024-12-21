//for sum of 4 element in array.
// #include <iostream>
// #include <vector>
// using namespace std;

// void printPair(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         for (int j = i + 1; j < size; j++) {
//             cout << "[" << arr[i] << ", " << arr[j] << "]" << endl;
//         }
//     }
// }

// vector<int> fourSum(int arr[], int size, int target) {
//     vector<int> ans(4, -1);
//     for (int i = 0; i < size; i++) {
//         for (int j = i + 1; j < size; j++) {
//             for (int k = j + 1; k < size; k++) {
//                 for (int l = k + 1; l < size; l++) {
//                     if (arr[i] + arr[j] + arr[k] + arr[l] == target) {
//                         ans[0] = arr[i];
//                         ans[1] = arr[j];
//                         ans[2] = arr[k];
//                         ans[3] = arr[l];
//                         return ans;
//                     }
//                 }
//             }
//         }
//     }
//     return ans;
// }

// int main() {
//     int arr[5] = {10, 20, 30, 40, 50};
//     int n = 5;

//     vector<int> ans = fourSum(arr, n, 100);
//     if (ans[0] == -1) {
//         cout << "Pair is not found" << endl;
//     } else {
//         cout << "Pair is found [" << ans[0] << ", " << ans[1] << ", " << ans[2] << ", " << ans[3] << "]" << endl;
//     }

//     return 0;
// }



//triplate 
#include<iostream>
// using namespace std;

// void printTriplate(int arr[], int n){
//   int count = 0;
//   for(int i=0; i<n; i++){
//     for(int j=0; j<n; j++){
//       for(int k=0; k<n; k++){
//         cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
//         count++;
//       }
//     }
//   }
//   cout<<"total triplate : " <<count<<endl;
// }

// int main(){
//  int arr[4] = {10,20, 30,40};
//  int size = 4;

// printTriplate(arr,size);

//   return 0;
// }

//two sum of array

#include<iostream>
using namespace std;

void twoSum(int arr[], int n, int target){
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      for(int k=j+1; k<n; k++){
        if(arr[i] + arr[j] + arr[k] == target){
            cout<<"["<<arr[i]<<","<<arr[j]<<","<<arr[k]<<"]"<<endl;
          // int ans = target;
          // cout<<ans<<endl;
        }
      }
    }
  }
}

int main(){

int nums[4] = {10,20,30,40};
int size = 4;

twoSum(nums,size, 70);
  return 0;
}
