//reverse array
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

  // int arr[7] = {10, 20, 30, 40, 50, 60, 70};//odd
  int arr[8] = {10, 20, 30, 40, 50, 60, 70,80}; //even
  int size = 8;

  //using reverse loop
  // for(int i = size-1; i>=0; i--){
  //   cout<<arr[i]<<" ";
  // }

 //using swaping method 
  // for(int i=0; i<size; i++){
  //   for(int j=i+2; j<size; j++){
  //     swap(arr[i],arr[j]);
  //   }
  //      cout<<arr[i]<<" ";
  // }

  //using two pointer approch
  // int left = 0;
  // int right  = size-1;
  
  //usinng for loop
  // for(int i=0; i<size; i++){
  //   if( left < right ){

  //   swap( arr[left], arr[right] );
  //     left++;
  //     right--;
  //   }

  //  cout<<arr[i]<<" ";
  // }

  //using while loop
  // int l = 0;
  // int r = size - 1;

  // while( l < r)
  //   swap(arr[l++], arr[r--]);
  // for(int i=0; i<size; i++)
  //   cout<<arr[i]<<" ";
  

//using C++ STL //Using c++ reverse function
   reverse(arr, arr+size);
   for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
   }
  return 0;
}