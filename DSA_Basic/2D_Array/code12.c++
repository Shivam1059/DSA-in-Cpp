//Set Matrix Zeroes

#include<iostream>
using namespace std;

int main(){
 int matrix[3][3] = {{1,1,1},
                     {1,0,1},
                     {1,1,1}};
  int n = 3;
 


 int col[n] = {0};
 int row[n] = {0};
 for(int i=0; i<n; i++){
  for(int j=0; j<n; j++){
    if(matrix[i][j] == 0){
      row[i] = 1;
      col[j] = 1;
    }
  }
 } 
 
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(row[i] || col[j]) {
        matrix[i][j] = 0;
      }
    }
    cout<<endl;
  }         
       

for(int i=0; i<n; i++){
  for(int j=0; j<n; j++){
    cout<<matrix[i][j]<<" ";
  }
  cout<<endl;
}

  return 0;
}
