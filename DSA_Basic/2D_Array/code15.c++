//Set Matrix Zeros

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){

//   int  matrix[3][3] = {{1,1,1},
//                     {1,0,1},
//                     {1,1,1}};

//   int m = 3;
//   int n = 3;

//     vector<bool> markRow(m, false);
//     vector<bool> markCol(n, false);

//   for(int i=0; i<m; i++){
//     for(int j=0; j<n; j++){
//       if(matrix[i][j] == 0){
//         markRow[i] = true;
//         markCol[j] = true;
//       }
//     }
//   } 

//    // Step 1: Set the marked rows to zero
//     for (int i = 0; i < m; i++) {
//         if (markRow[i]) {
//             for (int j = 0; j < n; j++) {
//                 matrix[i][j] = 0;
//             }
//         }
//     }
//     // Step 2: Set the marked columns to zero
//     for (int j = 0; j < n; j++) {
//         if (markCol[j]) {
//             for (int i = 0; i < m; i++) {
//                 matrix[i][j] = 0;
//             }
//         }
//     }
    
  
//  //Step 3: Output the modified matrix
// for(int i=0; i<m; i++){
//   for(int j=0; j<n; j++){
//     cout<<matrix[i][j]<<" ";
//   }
//   cout<<endl;
// }

//   return 0;
// }


//Another method of Set matrix is Zero's


#include<iostream>
using namespace std;


int setZero(int matrix[3][4], int n, int m){

 int row[n] = {0};
 int col[m] = {0};
  
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      if( matrix[i][j] == 0 ){
          row[i] = 1;
          col[j] = 1;
      }
    }
  }

  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      if(row[i] || col[j]){
        matrix[i][j] = 0;
      }
    }
  }
}
int main(){
  int matrix[3][4] = {{0,1,2,0},
                     {3,4,5,2},
                     {1,3,1,5}};
  int n= 3;
  int m = 4;

  setZero(matrix,n,m);
  for(int i=0; i<n; i++ ){
    for(int j=0;j<m; j++){
      cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }

  return 0;
}