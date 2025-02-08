// //Insertion sort

// #include<iostream>
// #include<vector>
// using namespace std;

// int insertSort(vector<int>arr){
//   int n = arr.size();
//   //i =0; chode dete he
//   for(int i=1; i<n; i++){
//     int key = arr[i];
//     int j = i-1;

//     while(j >= 0 && arr[i] > key){
//       arr[j+1] = arr[i];
//       j--;
//     }
//     arr[j+1] = key;
//   }


// }
// int main(){

//  vector<int>arr = {5,4,3,2,1};

//  insertSort(arr);
//  for(int i=0; i<arr.size(); i++){
//   cout<<arr[i]<<" ";
//  }

//   return 0;
// }

// Problem 2
#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int>&arr){
  int n = arr.size();

  for(int i=1; i<n; i++){
     int key = arr[i];
     int j = i-1;
  
  while(j >= 0 && arr[j] > key){
     arr[j+1] = arr[j];
     j--;
  }
  arr[j+1] = key;
}
}

int main(){
 
  vector<int>arr = {44,55,33,22,11};

  selectionSort(arr);
  for(int i=0; i<arr.size(); i++){
    cout<<arr[i] <<" ";
  }

  return 0;
}