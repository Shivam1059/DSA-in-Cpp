//CHeck subarray of sum k

#include<iostream>
using namespace std;

void subarray(int arr[],int n, int k){
  int count = 0;

for(int i=0; i<n; i++){
  int sum = 0;
  for(int j=i; j<n; j++){
    sum += arr[j];
    if(sum == k) count++;
  }
}
return count;
}

int main(){

int arr[] = {10,5,2,7,1,9};
int n = 6;
int k = 17;


subarray(arr,n,k);
  return 0;
}