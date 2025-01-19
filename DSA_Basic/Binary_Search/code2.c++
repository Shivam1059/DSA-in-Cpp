//Find first occurence 

#include<iostream>
#include<algorithm>
using namespace std;


void firstOccurence(int arr[], int n, int target , int &ansIndex){
 int s = 0;
 int e = n-1;
 int mid = s + (e-s)/2;

 while(s <= e){
   if( arr[mid] == target){
     ansIndex = mid;
     e = mid-1;
   }

    else if( target > arr[mid]){
       s = mid + 1;
    }

    else if(target < arr[mid]){
     e = mid - 1;  
    }
   mid = s + (e-s)/2;
 }
}

int main(){
  int arr[] = {10,20,20,20, 20, 34,56,78,34, 23};
  int n = 10;
  int target = 20;
  int ansIndex = -1;

  firstOccurence(arr, n, target, ansIndex);
  cout<<" first Occ index : "<< ansIndex <<endl;


  return 0;
}