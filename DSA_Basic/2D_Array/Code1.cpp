// 2D array

#include<iostream>
using namespace std;

int main(){

   int arr[4][4] = {{1,2,3,5},
                   {4,5,6,8},
                   {6,7,2,3},
                   {6,3,4,5} };
    int row = 4;
    int col = 4;  

// col vies
// for(int j=0; j<col; j++){
//     for(int i=0; i<row; i++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }

//diagnal vies --> only have square matric 
// for(int i=0; i<row; i++){
//     for(int j=0; j<col; j++){
//         if( row == col){
//             cout<<arr[i][j]<<" ";
//         }
        
//     }
//     cout<<endl;
// }
//optinal methid 
for(int i=0; i<row; i++){
    cout<<arr[i][i] <<" ";
}

// row vies             
    //  for(int i=0; i<row; i++){
    //     for(int j=0; j<col; j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    //  }

// squer matric 
// for(int i=0; i<row; i++){
//     for(int j=0; j<col; j++){
//         cout<<arr[j][i]<<" ";
//     }
//     cout<<endl;
// }

    return 0;
}