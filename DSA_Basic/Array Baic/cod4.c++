//liner algorithum
#include<iostream>
#include<limits.h>
using namespace std;

void printArr(int arr[],  int size){
  for(int i=0; i<size; i++){
    cout<<arr[i]<<" " ;
  }
}



void solve(int arr[], int n){
  for(int i=0; i<n; i++){
    arr[i] = arr[i] *10;
  }
}

bool findTargt(int arr[], int size,
int target ){

  for(int i=size-1; i>=0; i--){
    if(arr[i] == target){
      //found
      return true;
    }
  }
  return false;
}


int findMax(int arr[], int size){
  int maxAns = INT_MIN;
  for(int i=0; i<size; i++){
    maxAns = max(maxAns, arr[i]);
  }
  return maxAns;

}

int main(){

//   int arr[] = {10, 20, 30, 40, 50};
//   int size = 5;
//   int target = 55;

//   bool ans = findTargt(arr, size, target);
//   cout<< "ans : "<<ans<<endl;
//   // printArr(arr, size);
 

// int arry[10];
// int size;
// cout<<"Enter the number of element"<<endl;
// cin>>size;

int arr[100];
int size;
cout<<"Enter the number of elements"<<endl;
cin>>size;

for(int i=0; i<size; i++){
  cout<<"Enter the input value of index: "<<i<<endl;
  cin>>arr[i];
}

for(int i=0; i<size; i++){
 cout<<"Enter  the input value of index:" <<i<<endl;
 cin>>arr[i];

}

cout<<" max number is : "
<<findMax(arr,size)<<endl;
  return 0;
}


