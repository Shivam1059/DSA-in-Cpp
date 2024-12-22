//swappin  array element

// #include<iostream>
// using namespace std;


//  void printArray(int arr[],int n){
//   for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
//   }cout<<endl;
//  }

// void swapArray(int arr[], int size){
//   for(int i=0; i<size; i+=2){
//     if(i+1 <size ){
//       swap(arr[i],arr[i+1]);
//     }
//   }
// }

// int main(){

// int even[8] = {5,2,9,4,7,6,1,0};
// int odd[5] = {11,33,9,76,43};


// swapArray(even,8);
// printArray(even, 8);
// swapArray(odd,5);
// printArray(odd, 5);

// cout<<endl;

//   return 0;
// }


//sum of all element of array

#include<iostream>
using namespace std;

int main(){

 int n;
 cout<<"Enter the size of array ";
 cin>>n;


 int arr[n];
 int sum = 0;

 for(int i=0; i<n; i++){
  cin>>arr[i];
  sum = sum + arr[i];
 }
  cout << "The sum of all element of array is : "<<sum<<endl;

  return 0;
}