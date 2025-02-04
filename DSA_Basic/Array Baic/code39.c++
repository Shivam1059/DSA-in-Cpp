// //Peak value in Mountain array
// #include <iostream>
// #include <algorithm> 
// #include<vector>

// using namespace std;

//  int peakIndexMountainArray(vector<int>arr){
//   //  int max = INT_MIN;
//   //  int maxindex = -1;
//   //  for(int i=0; i<arr.size(); i++){
//   //   if(arr[i] > max){
//   //     max = arr[i];
//   //     maxindex = i;
//   //   }
//   //  }
//   //   return maxindex;

//   int n = arr.size();
//   int s = 0, e = n- 1;
//   int mid = s + (e-s)/2;
//   while(s<e){
//     if(arr[mid] > arr[mid + 1]){
//       s = mid + 1;
//     }
//     else{
//        e = mid;
//     }
//      int mid = s + (e-s)/2;
//   }
//    return mid;
//  }
 

// int main(){

//  vector<int>arr = {0,2,1,0};
//  int num = peakIndexMountainArray(arr);
//  cout<<num; 

//   return 0;
// }


//using stor and Compute
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int peakIndex(vector<int>array){
  int n = array.size();
  int s = 0;
  int e = n-1;

 int ansIndex = -1;
  while(s <= e){
    int mid = s + (e - s)/2;
        if(array[mid] = array[mid +1]){
          s = mid + 1;
        }
        else{
          ansIndex = mid;
          e = mid -1;
        }
  }
  return ansIndex;
}

int main(){
 
 vector<int>array = {};
  int ans = peakIndex(array);
  cout<<ans;

  return 0;
}
 