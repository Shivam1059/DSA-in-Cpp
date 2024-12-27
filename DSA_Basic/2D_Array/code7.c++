//2D array in diagnal sum

#include<iostream>
using namespace std;


void diagnolSum(int arr[][3],int row, int col){
  int sum = 0 ;
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      if( arr[i] == arr[j]){
        // cout<<arr[j][j]<<" ";
        sum = sum + arr[i][j];
      }
    }
  }
  cout<<" Sum of diagnol value of arr is : "<<sum;
}

int main(){
  int arr[3][3] = {{10,20,30},
                  {34,56 ,78},
                  {23, 45, 89}
                  };
  int row =3;
  int col =3;

diagnolSum(arr,row,col);



  return 0;
}