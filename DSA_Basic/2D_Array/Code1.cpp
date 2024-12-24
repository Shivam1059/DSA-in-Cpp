// 2D array

#include<iostream>
using namespace std;

int main(){

   int arr[4][4]= {{1,2,3,4},
                   {4,5,6,7},
                   {6,7,8,9},
                   {6,5,4,3} };
    int row = 4;
    int col = 4;               

     for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }


    return 0;
}