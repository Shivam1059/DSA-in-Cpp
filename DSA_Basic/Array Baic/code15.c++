//Dutch national flag problem

#include<iostream>
#include<algorithm>
using namespace std;


//using Dutch nation flog algorithum
// void sortArray(int arr[], int n){
//   int low = 0, mid = 0, high = n-1;

//   while(mid <= high){
//     if(arr[mid] == 0){
//       swap(arr[low], arr[mid]);
//       low++;
//       mid++;
//     }
//     else if(arr[mid] == 1){
//       mid++;
//     }

//     else{
//       swap(arr[mid], arr[high]);
//       high--;
//     }
//   }

  
// }

int main(){

 int arr[6] = {0,1,2,0,1,2};
  int size = 6;


  cout<<"before:"<<endl;
  for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  // sortArray(arr,size);

  // cout<<"After:"<<endl;
  // for(int i=0; i<size; i++){
  //   cout<<arr[i]<<" ";
  // }

// using sort algorithm
// for(int i=0; i<size; i++){
//   sort(arr, arr+size);
//   cout<<arr[i]<<" ";
// }

for(int i=0; i<size; i++){
  sort(arr, arr+size);
  cout<<arr[i]<<" ";
}

  return 0;
}