//All row sum value 


#include<iostream>
using namespace std;


void  sumRowvise(int arr[][4],int row, int col){
  for(int i=0; i<row; i++){
  int sum = 0;
    for(int j=0; j<col; j++){
      sum = sum + arr[i][j];
    }
    cout<<sum<<endl;
  }

}

int main(){

  int arr[3][4] = {{10,20,30,50},
                 {30,45,67,89},
                 {45,67,89,23}
                 };

  int row = 3;
  int col = 4;

 sumRowvise(arr,row,col);


  return 0;
}
