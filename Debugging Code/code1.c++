//Debug the code. Sum of array.

// #include<iostream>
// using namespace std;

// int main(){
//     int n ;
//     cin>>n;
//     int sum = 0;
//     for(int i=0;i<n;i++){
//         cin>>i;
//     }
//      for(int i=0; i<n; i++){
//          sum = sum + i;
//      }
//     cout << sum << endl;
//     return 0;
// }


//Debug the code. Linear Search.

// #include<iostream>
// using namespace std;

// int linearSearch(int arr[], int n ,int val){
//     for(int i=0;i<n;i++){
//         if(arr[i]==val){
//           return val;
      
//         }
//     }
//     return   -1 ;
// }
// int main(){

//   int arr[5] = {2,3,4,5,6};
//   int size = 5;
//   int val = 4;

//  int ans =  linearSearch(arr,5,val);
//  cout<<" Ans is : "<<val;

//   return 0;
// }


//Debug the code.

#include<iostream>
using namespace std;
 
 void swapAlternate(int arr[],int size){
  int temp = 0;
    for(int i=0;i<size-1;i=i+2){
        int temp = arr[i+2];
        arr[i] = arr[i];
        arr[i+1] = temp;
    }
}

int main(){

  int arr[8] = {2,3,4,5,6,7,8,9};
  int size = 8;

  swapAlternate(arr,size); 
  //print arr
  for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
  }




  return 0;
}