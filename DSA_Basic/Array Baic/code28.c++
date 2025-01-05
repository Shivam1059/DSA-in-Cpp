//Maximum Score from Subarray Minimums

#include<iostream>
#include<vector>
using namespace std;

int maxiSum(vector<int>arr, int n){
    for(int i=0; i<n; i++){
     int sum = 0;
     for(int j=i; j<n; j++){
      sum += arr[j++];
     }
     cout<< sum<<" ";
   }
}

int main(){
   vector<int>arr = {4,3,1,5,6};
   int n = arr.size();

 
   maxiSum(arr,n);


  return 0;
}