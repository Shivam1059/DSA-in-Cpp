//Smallest Divisor

#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
int sumByD(vector<int>arr, int div){
  int n = arr.size();
  int sum = 0;

  for(int i=0; i<n; i++){
    sum = sum+ceil((double)(arr[i])/(double)(div));
  }
  return sum ;
}


int findSmallestDivisor(vector<int>arr, int k){
  int low = 0, high = *max_element(arr.begin(), arr.end());
  int mid = low + (high - low)/2;

  while(low <= high){
    int mid = low + (high - low)/2;

    if(sumByD(arr, mid) <= k){
      high = mid-1;
    }else{
      low = mid + 1;
    }
  }
  // find smallest value  so going in left
  return low;
}

int main(){
 
 vector<int>arr = {2,3,7,4,10};
 int k = 5;

 int ans = findSmallestDivisor(arr, k);
 cout<<" Ans : "<<ans<<endl;


}

