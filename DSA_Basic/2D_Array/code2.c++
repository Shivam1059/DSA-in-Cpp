//Take a input in 2D array roe vise

#include<iostream>
using namespace std;

int main(){


 int arr[3][5];
 int row = 3;
 int col = 3;
 //take input
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      cout<<" Enter the value for ( " <<i<< ","<<j<<") :";
      cin>>arr[i][j];
    }
  }
//print output
  for(int m=0; m<row; m++){
    for(int n=0; n<col; n++){
      cout<<arr[m][n]<<" ";
    }
    cout<<endl;
  }



  return 0;
}