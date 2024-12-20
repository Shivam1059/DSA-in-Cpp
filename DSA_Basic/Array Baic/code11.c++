//remove the duplicaies form the array

// #include<iostream>
// using namespace std;

// int duplicateArr(int arr[], int m){
//     int ans = 0;
//     for(int i=0; i<m; i++){
//       ans = ans ^ arr[i];
//    }
//    return ans;
// }

// int main(){
//    int arr[7] = {3,4,5,3,4,5,8};
//    int n = 7;

//    int num = duplicateArr(arr,n);
//    cout<<"Unique number : " <<num<<" ";

//   return 0;
// }

//sort the array

#include<iostream>
#include<algorithm>
using namespace std;

void sortZeorOne(int arr[], int n){
  int zeroCount = 0;
  int oneCount = 0;

  for(int i=0; i<n; i++){
     if(arr[i] == 0){
      zeroCount++;
     }
     if(arr[i] == 1){
      oneCount++;
     }
  }
  //using fill fun
  fill(arr, arr + zeroCount, 0);
  fill(arr+zeroCount,arr+n, 1);

  //optinaol
//   int i=0;
//   for(;i<zeroCount;i++){
//     arr[i] = 0;
//   }
//   for(;i<n;i++){
//     arr[i] = 1;
//   }
// }




int main(){

   int arr[6] = {0,1,0,1,1,0};
   int n = 6;

//using sort algo STL
  //  for(int i=0;i<n; i++){
  //   sort(arr,arr+n);
  //   cout<<arr[i]<<" ";
  //  }

  sortZeorOne(arr, n);
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }




  return 0;
}
