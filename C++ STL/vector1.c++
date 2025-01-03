//2D vector

#include<iostream>
#include<vector>
using namespace std;

int main(){

  //creation of vector of 2D array
  vector<vector<int>> arr(4,vector<int>(5,8));
  int row = arr.size();
  int col = arr[0].size();

  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
 

//creat a ZEC 2d Vector
vector<vector<int>>num(5);

num[0] = vector<int>(7);
num[1] = vector<int>(5);
num[2] = vector<int>(8);
num[3] = vector<int>(3);
num[4] = vector<int>(6);

int totalrowcount = num.size();
int totalcolcount  = num[i].size();
for(i : num){
  cout<< i <<" ";
}

// for(int i=0; i<totalrowcount; i++){
//   for(int j=0; j<totalcolcount; j++){
//     cout<num[i][j]<<" ";
//   }
// }

  return 0;
}