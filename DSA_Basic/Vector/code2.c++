// //Creating 2D array using vector
  //liner search
// #include<iostream>
// #include<vector>
// using namespace std;

// bool cheaktarget(vector<vector<int>> arr,int target){
//   int row = arr.size();
//   int col = arr[0].size();
//   for(int i=0; i<row; i++){
//     for(int j=0; j<col; j++){
//       if(arr[i][j] == target)
//       return true;
//     }
//   }
//   return false;
// }

// int main(){

//  vector<vector<int>> arr(4,vector<int>(3,2));
//  int row = arr.size();
//  int col = arr[0].size();
//  int target = 50;

//  for(int i=0; i<row; i++){
//   for(int j=0; j<col; j++){
//     cin>>arr[i][j];
//   }
//   cout<<endl;
//  }


// int ans = cheaktarget(arr, target);
// cout<<" Ans is : "<<ans;
//   return 0;
// }



//find minimum value of arr
#include<iostream>
#include<vector>
#include <climits> 
using namespace std;


int checkMin(vector<vector<int>> arr){
    int row = arr.size();
    int col = arr[0].size();

  int minvalue = INT_MAX;
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        minvalue  = min(minvalue,arr[i][j]);
    }
  }
  return minvalue;
}
int main(){

  vector<vector<int>> arr(4,vector<int>(3));
  int row = arr.size();
  int col = arr[0].size();

  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      cin>>arr[i][j];
    }
    cout<<endl;
  }

int ans = checkMin(arr);
cout<<"Minimum value is array is : "<< ans;


 return 0;
}