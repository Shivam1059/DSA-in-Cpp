//swapping two array of values

// #include<iostream>
// using namespace std;

// void swapArray(int arr1[], int arr2[], int size){
//   for(int i=0; i<size; i++){
//     int temp = arr1[i];
//     arr1[i] = arr2[i];
//     arr2[i] = temp;
//   //  cout<<arr1[i]<<" ";
//    cout<<arr2[i]<<" ";
//   }

// }

// int main(){

// int arr1[] = {5,6,7,8,9};
// int arr2[] = {2,3,4,5,6};
// int size = 5;

// swapArray(arr1,arr2,size);
//   return 0;
// }


//swap a value in a array

#include<iostream>
using namespace std;

//swap function
void swapValues(int arr[], int n){
  swap(arr[0],arr[n-1]);
  cout<<arr[n];
}
int main(){
  
  int arr[] = {5,4,3,2,8};
  int size = 5;

//function coll
swapValues(arr, size);
return 0;
}
