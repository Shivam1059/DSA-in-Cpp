//Peak Index in Mountain array
#include<iostream>
#include<vector>
using namespace std;


int peakIndexMountainarray(vector<int>arr){
  int n = arr.size();
  int s = 0, e = n-1;

  while(s < e){
    int mid = s + (e-s)/2;
    
    if(arr[mid] < arr[mid + 1]){
      s = mid + 1;
    } 
    else{
      e = mid;
    }
    return arr[mid];
  } 

}

int main(){

 vector<int>arr = {0,10,5,2};
  int ans = peakIndexMountainarray(arr);
  cout<<ans;

  return 0;
}