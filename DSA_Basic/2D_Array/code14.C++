//Roted matrix 90 degree

#include<iostream>
#include<algorithm>
using namespace std;

int main(){

int matrix[4][4] = {{1,2,3,4},
                    {4,5,6,5},
                    {7,8,9,2},
                    {7,5,3,1}};
  int n = 4;
  int m = 4;

  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cout<<matrix[j][i]<<" ";
    }
    cout<<endl;
  }  

  cout<<" matrix is rotate 90 degree : "<<endl;
  for(int i=0; i<n; i++){
    for(int j=m-1; j>=0; j--){
      cout<<matrix[j][i]<<" ";
    }
    cout<<endl;
  }  


//optinal method 
// for(int i=0; i<n; i++){
//  reverse(matrix[i].begin(), matrix[i].end());
// }


  return 0;
}