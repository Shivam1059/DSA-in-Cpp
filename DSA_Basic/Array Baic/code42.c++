//K-diff Pair in an Array
//Leetcode 532

//for  T.C => O[n^2]
#include<iostream>
using namespace std;

int numberofPairdiff(int arr[], int n,int k){
  
  
  int count = 0;
  for(int i=0; i<n; i++){
    for(int j = i+1; j<n; j++){
       int diff = arr[i] - arr[j];
       if(diff == k){
         count++;
       }
    }
  }
  return count ;
}

int main(){

   int arr[5] = {3,1,4,1,5};
   int n = 5;
   int k = 2;

  int ans =  numberofPairdiff(arr,n,k);
  cout<<" Numer of Pair is : "<<ans;


  return 0;
}