// //Spiral Print Matrix

// #include<iostream>
// #include <vector>
// using namespace std;

// int main(){

//   int matrix[3][3] = {{1,2,3},
//                       {4,5,6},
//                       {7,8,9}};
//   int n = 3;
//   int m = 3;
  
// vector<int>ans;


// int totalElement = m*n;

// int startingRow = 0;
// int endingCol = n-1;
// int endingRow = m-1;
// int staringCol = 0;


// int count = 0;

// while( count < totalElement){
//     //print startingrow
//     for(int i=staringCol; i<=endingCol && count<totalElement ; i++){
//       ans.push_back(matrix[startingRow][i]);
//       count++;
//     }
//     startingRow++;
//     //print endingcol
//     for(int i=startingRow; i<=endingRow && count<totalElement ; i++){
//       ans.push_back(matrix[i][endingCol]);
//       count++;
//     }
//     endingCol--;
//     //print endingrow
//     for(int i=endingCol; i>=staringCol && count<totalElement ; i--){
//       ans.push_back(matrix[endingRow][i]);
//       count++;
//     }
//     endingRow--;
//     //print startingcol
//     for(int i=endingRow; i>=startingRow && count<totalElement ; i--){
//       ans.push_back(matrix[i][staringCol]);
//       count++;
//     }
//     staringCol++;

// }

// for(int i=0; i<ans.size(); i++){
//   cout<<ans[i]<<" ";
// }
// cout<<endl;

//   return 0;
// }


#include<iostream>
#include<vector>
using namespace std;

vector<int> spirallymatrix(vector<vector<int>>mat){
  int n = mat.size();
  int m = mat[0].size();

  vector<int>ans;



  int totalElement = n*m;

  int startingrow = 0;
  int endingcol = n-1;
  int endingrow = m-1;
  int startingcol = 0;

  int count = 0;

  while(count < totalElement){
    //print starting row
    for(int i=startingcol; i<=endingcol && count < totalElement; i++){
      ans.push_back(mat[startingrow][i]);
      count++;
    }
    startingrow++;

    //print endingcol
    for(int i=startingrow; i<=endingrow && count < totalElement; i++ ){
      ans.push_back(mat[i][endingcol]);
      count++;
    }
    endingcol--;

    //print ending row
    for(int i=endingcol; i>=startingcol && count < totalElement; i--){
      ans.push_back(mat[endingrow][i]);
      count++;
    }
    endingrow--;

    //print statting col
    for(int i=endingrow; i>=startingrow && count < totalElement; i--){
      ans.push_back(mat[i][startingcol]);
      count++;
    }
    startingcol++;
  }     
  return ans;                   
 
}

int main(){

vector<vector<int>>mat = {{11,12,13,14},
                          {15,16,17,18},
                          {19,20,21,22},
                          {23,24,25,26}};
  

vector<int> result = spirallymatrix(mat);

    // Print the result
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

  return 0;
}

