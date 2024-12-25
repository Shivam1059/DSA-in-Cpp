//Creating 2D array in vector

#include<iostream>
#include<vector>
using namespace std;

int main(){
  
 vector<vector<int>> arr(4,vector<int>(3,2));
 int row = arr.size();
 int col = arr[0].size();

 for(int i=0; i<row; i++){
  for(int j=0; j<col; j++){
    cout<<arr[i][j]<<" ";
  }
  cout<<endl;
 }



  return 0;
}