// //2D array row vise calculation

// #include<iostream>
// using namespace std;

// int main(){

//   int matrix[3][4] = {{4,5,6,7},
//                       {5,8,9,3},
//                       {3,8,5,2}};

//   int row = 3;
//   int col = 4;
  
//   //row vise colculation
//   for(int i=0; i<row; i++){
//   int sum = 0;
//     for(int j=0; j<col; j++){
//       sum += matrix[i][j];
//     }
//       cout<<i<<" Row addition : "<<sum<<" "<<endl;
//   }

//   //col vise
//   for(int i=0; i<col; i++){
//   int sum = 0;
//     for(int j=0; j<row; j++){
//       sum += matrix[j][i];
//     }
//       cout<<i<<" Col addition : "<<sum<<" "<<endl;
//   }
//   return 0;
// }



//Diagonal vise calculation

#include<iostream>
using namespace std;

int main(){

  int matrix[3][3] = {{2,3,4},
                      {4,5,6},
                      {5,8,9}};
  int row = 3;
  int col = 3;                    
  
  //diagnol print
  // for(int i=0; i<row; i++){
  //   for(int j=0; j<col; j++){
  //     if(i==j){
  //       cout<<matrix[i][j]<<" ";
  //     }
  //   }
  //   cout<<endl;
  // }

  //Addition of Diagnol
    // int sum = 0;
    // for(int i=0; i<row; i++){
    //     for(int j=0; j<col; j++){
    //       if(i==j){
    //         sum += matrix[i][j];
    //       }
    //     }
    //   cout<<endl;
    // }
    // cout<<"Sum of diagnol : "<<sum;

  //Addition of Diagnol
    int sum = 0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col-i-1; j++){
            sum += matrix[i][j];
        }
      cout<<endl;
    }
    cout<<"Sum of diagnol : "<<sum;

  return 0;
}
