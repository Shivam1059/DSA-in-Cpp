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

//transforse of matrix
// void transposeMatrix(int arr[][3],int row, int col){
//   int ans[100][100] = {0};
//   for(int i=0; i<row; i++){
//     for(int j=0; j<col; j++){
//        ans[i][j] = arr[j][i];
//     }
//   }

//   for(int i=0; i<row; i++){
//     for(int j=0; j<col; j++){
//        cout<<ans[i][j]<<" ";
//     }
//     cout<<endl;
//   }

// }

//transforse of matrix optional method
void transposeMatrix(int arr[][3], int row, int col){

 for(int i=0; i<row; i++){
   for(int j=i; j<col; j++){
     swap(arr[i][j] ,arr[j][i]);
   }
 }
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
       cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

}

int main(){
  int arr[3][3] = {{10,20,30},
                  {34,56 ,78},
                  {23, 45, 89}
                  };
  int row =3;
  int col =3;

// diagnolSum(arr,row,col);

transposeMatrix(arr,row,col);


  return 0;
}