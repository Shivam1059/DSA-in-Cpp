
#include<iostream>
using namespace std;

int main(){

  //creation

  // int arr[10];
  // int drr[4] = {0};

  // int crr[] = {10, 20, 30 ,50};

  // cout<<drr[0]<<endl;
  // cout<<crr[0]<<endl;

  int arr[4];
  int n =  4;
  //using fill method
  fill(arr, arr+n, 23);
  // cout<< arr[0] << " "<< arr[1] << " "<< arr[2] << " "<< arr[3] << " "<<endl;
 
 for(int i=0; i<n; i++){
  cout<<arr[i]<<" ";
 }
  return 0;
}