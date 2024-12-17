//take a input in array who ?

#include<iostream>
using namespace std;

void print(int array[], int size){
  for(int i=0; i<size; i++){
    cout<<array[i] <<" ";
  }
}

void solve(int arr[], int n){
  for(int i=0; i<n; i++){
    arr[i] = arr[i] * 10;
  }
}

int main(){
  //take a array size
  int n;
  cout<<"Enter arry size : ";
  cin>>n;
  //arr declareation
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  //print array
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }

// int array[] = {10, 20, 30, 40, 50};
// int size = 5;

// solve(array, size);
// print(array,size);
  return 0;
}