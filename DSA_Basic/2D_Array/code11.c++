//roated array in 90 Degrees

#include<iostream>
using namespace std;

int main(){

int n = 3;
int arr[n][n] = {{1,2,3},
                 {4,5,6},
                 {7,8,9}};
                 
  int matrix[n][n];
  for(int i=0; i<n;i++ ){
    for(int j=0; j<n;j++){
      matrix[i][j] = arr[j][n-1-i];   
    }
    cout<<endl;
  }     
   

for(int i=n; i>=0; i--){
  for(int j=0; j<n; j++){
    cout<<matrix[i][j]<<" ";
  }
  cout<<endl;
}


  return 0;
}