//finding maximum & minimum

#include<iostream>
// using namespace std;

// //for maximum
// void maximumArr(int arr[], int size){
//     int maximum = arr[0];
//   for(int i=0; i<size; i++){
//       if(arr[i]>maximum){
//         maximum = arr[i];
//       }
//   }
//   cout<<"Maximum value of array is : "<<maximum<<endl;
// }

// //for minimum
// void minimumArr(int arr[], int m){
//   int minimum = arr[0];
//   for(int i=0; i<m; i++){
//     if(arr[i]<minimum){
//       minimum = arr[i];
//     }
//   }
//    cout<<"minimun value of array is : "<<minimum<<endl;
// }

// int main(){

//   int arr[6]  = {3,4,5,9,8,1};
//   int n = 6;

//   maximumArr(arr,n);
//   minimumArr(arr,n);

//   return 0;
// }

//reverse array 

#include<iostream>
using namespace std;

int main(){
   int arr[8] = {8,3,5,7,2,6,4,9};
   int n = 8;

   for(int i = n-1; i>=0; i--){
   cout<<arr[i]<<" ";
   }
  return 0;
}
