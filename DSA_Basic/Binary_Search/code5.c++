//Find Total Occurence

#include<iostream>
using namespace std;

void  firstoccurenc(int nums[], int n, int target, int arr[]){
  int s = 0;
  int e = n-1;
  while(s <= e){
    int mid = s + (e-s)/2;
    if(nums[mid] == target){
       arr[0]  = mid;
       e = mid -1;
    } 
    else if(target > nums[mid])
      s = mid + 1;
    else{
     e = mid -1;
  }
}
}
void  lastoccurence(int nums[], int n, int target, int arr[]){
  int s = 0;
  int e = n-1;
  while(s <= e){
    int mid = s + (e-s)/2;
    if(nums[mid] == target){
       arr[1] = mid;
       s= mid + 1;
    }
    else if(target > nums[mid])
      s = mid + 1;
    else{
     e = mid -1;
  }
}
}
int main(){

  int nums[] = {10,20,20,20,20,20,30,40,50};
  int n = 9;
  int target = 20;
  int arr[] = {-1,-1};
  


  firstoccurenc(nums, n, target , arr);
  lastoccurence(nums,n,target, arr);

  cout<< " First occurence : " <<arr[0] <<endl;
  cout<< " lastcurence : " <<arr[1]<<endl;

int totalLen = (arr[1] - arr[0]) + 1;
cout<< totalLen;

return 0;

}