//Set Matrix Zeros

#include<iostream>
#include<vector>
using namespace std;

int main(){

  int  matrix[3][3] = {{1,1,1},
                    {1,0,1},
                    {1,1,1}};

  int m = 3;
  int n = 3;

     vector<bool> markRow(m, false);
    vector<bool> markCol(n, false);