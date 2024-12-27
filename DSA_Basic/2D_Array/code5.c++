//find max and min value;

#include<iostream>
#include<climits>
using namespace std;


//find maximum value 
int maxValue(int arr[][4]){
  int row = 3;
  int col = 4;
  int maxValue = INT_MIN;
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      if(arr[i][j] > maxValue)
      maxValue = max(maxValue, arr[i][j]);
    }
  }
  return  maxValue;
}


//find minimum value 
int   minValue(int arr[][4]){
  int row = 3;
  int col = 4;

  int minValue = INT_MAX ;
  for(int i=0; i<row; i++ ){
    for(int j=0; j<col; j++){
      minValue = min(minValue , arr[i][j]);
    }
  }
  return minValue;
}

int main(){

  int arr[3][4]  = { {10,20,30,45},
                     {30,40,60,67},
                     {67,34,89,99}
                     };
  int row = 3; 
  int col = 4;

 //coll function for maximum value 
// int Maximum  = maxValue(arr);
// cout<<" Maximum value is : "<<Maximum<<endl;


 //coll function for minimum value 
int Minimum  = minValue(arr);
cout<<" Minimum value is : "<<Minimum<<endl;


  return 0;
}

