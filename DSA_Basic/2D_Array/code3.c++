//liner searching in 2D array
#include<iostream>
using namespace std;

bool cheackArray(int arr[3][4], int n , int m ,int target){
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      if(arr[i][j] == target)
        return true;
    }
  }
  return false;
}

int main(){
 
  int arr[3][4] = { {10,20,30,40},
                   {50,55,57,59},
                   {69,72,79,89}
                  };

  int row = 3; 
  int col = 4;
  int target = 89;
  int ans = cheackArray(arr, row, col,target);
  cout<< " Ans is :  "<< ans <<endl;

  return 0;
}