//Slection sort

#include<iostream>
#include<vector>

using namespace std;

void selectionSort(vector<int>&vec){
 int n = vec.size();
 for(int i=0; i<n-1; i++){
  int minIndex = i;
  for(int j=i+1; j<n; j++){
    if(vec[j] < vec[minIndex])
      minIndex = j;
  }
  swap(vec[i], vec[minIndex]);
 }
}

// void print(vector<int>&vec){
//   int n = vec.size();
//   for(int i=0; i<n; i++){
//     cout<<vec[i]<<" ";
//   }
// }

int main(){

  vector<int>vec = {44,33,55,22,11};
  
  selectionSort(vec);
  // print(vec);
  int n = vec.size();
  for(int i=0; i<n; i++){
    cout<<vec[i]<<" ";
  }
  

  return 0;
}
