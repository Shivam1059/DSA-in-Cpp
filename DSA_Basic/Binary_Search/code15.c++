//First Occurence and last Occurence

#include<iostream>
#include<vector>
using namespace std;

int firstOccurence(vector<int>&arr,int target, int n){

  int s = 0, e = n-1;
  int ans = -1;

  while(s <= e){
    int mid = s + (e-s)/2;
    if(arr[mid] == target){
      ans = mid;
      // e = mid -1;
      s = mid + 1;
    }

    if(target > arr[mid]){
       s = mid + 1;
    }
    else if(target < arr[mid]){
      e = mid-1;
    }
  }
  return ans;

}

int main(){

 vector<int>arr = {10,20, 20,20,20, 30};
 int n = arr.size();
 int target = 20;

 int ans = firstOccurence(arr,target, n);
cout <<" First Ocuurence is : "<<ans<<endl;

  return 0;
}


