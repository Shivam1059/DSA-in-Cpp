//Spiral Print Matrix

#include<iostream>
#include <vector>
using namespace std;

int main(){

  int matrix[3][3] = {{1,2,3},
                      {4,5,6},
                      {7,8,9}};
  int n = 3;
  int m = 3;
  
vector<int>ans;


int totalElement = m*n;

int startingRow = 0;
int endingCol = n-1;
int endingRow = m-1;
int staringCol = 0;


int count = 0;

while( count < totalElement){
    //print startingrow
    for(int i=staringCol; i<=endingCol && count<totalElement ; i++){
      ans.push_back(matrix[startingRow][i]);
      count++;
    }
    startingRow++;
    //print endingcol
    for(int i=startingRow; i<=endingRow && count<totalElement ; i++){
      ans.push_back(matrix[i][endingCol]);
      count++;
    }
    endingCol--;
    //print endingrow
    for(int i=endingCol; i>=staringCol && count<totalElement ; i--){
      ans.push_back(matrix[endingRow][i]);
      count++;
    }
    endingRow--;
    //print startingcol
    for(int i=endingRow; i>=startingRow && count<totalElement ; i--){
      ans.push_back(matrix[i][staringCol]);
      count++;
    }
    staringCol++;

}

for(int i=0; i<ans.size(); i++){
  cout<<ans[i]<<" ";
}
cout<<endl;

  return 0;
}