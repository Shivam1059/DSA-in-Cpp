//Binary Search

#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int target){
  int s = 0, e = n-1;
  int mid = s + (e-s)/2;

  while(s <= e){

    if(arr[mid] == target)
      return mid;
    else if(target > arr[mid])
       s = mid + 1;
    else{
      e = mid -1;
    }  
    mid = s + (e-s)/2;

  }
  return -1;
}

int main(){

  //int arr[] = {-1,0,3,4,5,9,12}; //odd array
  int arr[] = {-1,0,3,5,9,12}; //even array
  int n = 7;
  int target = 3;

  int ans = binarySearch(arr, n, target);
  cout<<" The target index is : "<<ans;


  return 0;
}