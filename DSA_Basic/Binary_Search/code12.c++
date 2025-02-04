//Store and adjcent element

#include<iostream>
using namespace std;

int  applyBinarySearch(int arr[], int size, int target){
  int s = 0;
  int e = size -1;

  while(s <= e){
      int mid = s+(e-s)/2;
    if(arr[mid] == target){
      return mid;
    } 
    if(arr[mid-1] == target){
        return mid-1;
    }
    if(arr[mid+1] == target){
      return mid + 1;
    }


    if(target > arr[mid]){
      //left
      s = mid + 2;
    }
    else{
      //right
      e = mid - 2;
    }
  }
  return -1;
}



int main(){

int arr[] {10,3,40,20,50,80, 70};
int size = 7;

int target = 70;
int ans = applyBinarySearch(arr, size, target);
cout<<" Found at Index : "<< ans <<endl;
  return 0;
}