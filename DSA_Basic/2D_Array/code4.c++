//find minimum value of in 2D array

#include<iostream>
#include<climits>
using namespace std;

//for minimum
// int cheackMin(int arr[][5]){
// int minvalue = INT_MAX;
// int row = 4;
// int col = 5;
// for(int i=0; i<row; i++){
//   for(int j=0; j<col; j++){
//     minvalue = min(minvalue,arr[i][j]);
//   }
// }
//   return minvalue;
// }

//for maximum
int cheackMax(int arr[][5]){
int maxvalue = INT_MIN;
int row = 4;
int col = 5;
for(int i=0; i<row; i++){
  for(int j=0; j<col; j++){
    maxvalue = max(maxvalue,arr[i][j]);
  }
}
  return maxvalue;
}

int main(){

int arr[4][5];
int row = 4;
int col = 5;

for(int i=0; i<row; i++){
  for(int j=0; j<col; j++){
    cin>>arr[i][j];
  }
}

// int minimum = cheackMin(arr);
// cout<<"The minimum value of array is : "<<minimum;

int maximum = cheackMax(arr);
cout<<"The minimum value of array is : "<<maximum;

  return 0;
}