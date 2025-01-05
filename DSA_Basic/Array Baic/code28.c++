// //Maximum Score from Subarray Minimums

// #include<iostream>
// #include<vector>
// using namespace std;

// int maxiSum(vector<int>arr, int n){
//     for(int i=0; i<n; i++){
//      int sum = 0;
//      for(int j=i; j<n; j++){
//       sum += arr[j++];
//      }
//      cout<< sum<<" ";
//    }
// }

// int main(){
//    vector<int>arr = {4,3,1,5,6};
//    int n = arr.size();
 
//    maxiSum(arr,n);

//   return 0;
// }


//Binary subarray with sum
// #include<iostream>
// #include<vector>
// using namespace std;

// void subarraysum(vector<int>arr,int target){
//   int n = arr.size();
//   int count = 0;
//   for(int i=0; i<n; i++){
//     int sum = 0;
//     for(int j=i; j<n; j++){
//       sum += arr[j];
//       if(target == sum)
//        count++;
//     }
//   }
//   return count;
// }

// int main(){
//   vector<int>arr = {1,0,1,0,1};
//   int n = arr.size();
//   int target = 2;

//   subarraysum(arr,target);

//   return 0;
// }

//longest sub-array with sum k
#include<iostream>
using namespace std;

void  longestSubArray(int arr[], int n, int k){
  int count = 0;
  for(int i=0; i<n; i++){
    int sum = 0;
    for(int j=i; j<n; j++){
        sum += arr[j];
        if(k == sum)
        count++;
      
    }
  }
  cout<<count<<" ";
}

int main(){

  int arr[6] = {10,5,2,7,1,9};
  int n = 6;
  int k = 15;
  
longestSubArray(arr,n,k);

  return 0;
}
