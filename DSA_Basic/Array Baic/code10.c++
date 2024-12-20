//reverse array
#include<iostream>
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

  //using two variable
  int left = 0;
  int right  = size-1;

  for(int i=0; i<size; i++){
    if( left < right ){
    swap(arr[left], arr[right]);
    left++;
    right--;
    }
   cout<<arr[i]<<" ";
  }

  return 0;
}