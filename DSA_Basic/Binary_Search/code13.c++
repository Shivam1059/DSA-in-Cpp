//Find Odd occuring element


#include<iostream>
using namespace std;

int findOddOccuringElemt(int arr[], int size){
  int s = 0;
  int e = size-1;
  int mid = s+(e-s)/2;

  while(s<=e){
    int mid = s+(e-s)/2; 

    //single element
    if(s==e){
      return s;
    }
    //duplicate does not exits
    if(mid-1 >= 0 && arr[mid] != arr[mid-1] && mid + 1 <size && arr[mid] != arr[mid+1]){
      return mid;
    }

    //Duplicate exits in left side
    if(mid-1 >= 0 && arr[mid] == arr[mid-1]){
      int pairStartingIndex = mid -1;
      if(pairStartingIndex & 1){
        //pair satrting index is odd
        //i am standing right part
        e = mid-1;
      }
      else{
        // pairIndex even 
        //Standing at left part
        s = mid + 1;
      }
    }

    //duplicate exits in right wala index
    else if(mid + 1 < size && arr[mid] == arr[mid + 1]){
      int pairStartingIndex = mid;
      if(pairStartingIndex & 1){
        //pair starting index is odd
        //i am standing at right part
        e = mid -1;
      }
      else{
           // pairIndex even 
        //Standing at left part
        s = mid + 1;
      }
    }

  }
 return -1;
}

int main(){

int arr[] = {1,1,2,2,3,3,4,5,5,6,6};
int size = 11;


int ans = findOddOccuringElemt(arr, size);
cout<<" ans Index : " << ans <<endl;
cout<<" ans Element : " << arr[ans] <<endl;



  return 0;
}
