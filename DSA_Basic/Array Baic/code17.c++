//Static array and Dyanmic array


#include<iostream>
using namespace std;

void fun(int arr[], int n){
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
int main(){
  
  //Staic allocation of array
  // int arr[5] = {1,2,3,4,5};
  // fun(arr, 5);

  //Daynamic  allocation of array
  int n;
  cin>>n;
  int *arr = new int[n];
  for(int i=0; i<n; ++i){
    int data;
    cin>>data;
    arr[i] = data;
  }
  fun(arr, n);
  return 0;


  
}
