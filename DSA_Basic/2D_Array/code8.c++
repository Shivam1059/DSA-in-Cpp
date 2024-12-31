// //INPUt in 2D array
// #include<iostream>
// using namespace std;

// int main(){

//   int matrix[4][3];
//   int row = 4;
//   int col = 3;

// //input
//   for(int i=0; i<row; i++){
//     for(int j=0; j<col; j++){
//       cin>>matrix[i][j];
//     }
//   }

//   cout<<"Matrix is " <<endl;

// //output
//  for(int i=0; i<row; i++){
//     for(int j=0; j<col; j++){
//       cout<<matrix[i][j]<<" ";
//     }
//     cout<<endl;
//   }
//   return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){

//   int arr[3][4] = {{2,3,4,5},
//                    {6,7,8,9},
//                    {5,3,8,2}};
//   int row = 3;
//   int col = 4;

//   for(int i=0; i<row; i++){
//     for(int j=0; j<col; j++){
//       cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//   }

// cout<<"Check value is : "<<arr[2][1];
   


//   return 0;
// }


#include<iostream>
using namespace std;


int main(){

  int arr[3][3] = {{3,4,6},
                   {6,8,9},
                   {4,6,9}};
  int row = 3;
  int col = 3;

//ColumVise
cout<<"Col vise arr : "<<endl;
  for(int i=0; i<col; i++){
    for(int j=0; j<row; j++){
      cout<<arr[j][i]<<" ";
    }
    cout<<endl;
  }

  //rowvise
  cout<<"Row vise arr :"<<endl;
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
