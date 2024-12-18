//find the the total ones & zeros
#include<iostream>
using namespace std;


void printZeroAndOnes(int arr[], int n){
  int zeroCount = 0;
  int oneCount = 0;

  //treverse Array
  for(int i=0; i<n; i++){
    int courrElement = arr[i];

    if(courrElement == 0){
      zeroCount++;
    }
    if(courrElement == 1){
      oneCount++;
    }
  }
  cout<<"Total zeroes : " <<zeroCount <<endl ;
  cout<<"Toatl ones : "<<oneCount<<endl;
}



//extremPrint
void extremPrint(int arr[], int n){
  int i = 0;
  int j = n-1;
  while(i<j){
    cout<<arr[i]<<" ";
    i++;
    cout<<arr[j]<<" ";
    j--;
  }
}

int main(){
// int arr[7] = {0,1,1,1,0,0,1};
int arr[6] = {10,20,30,40,50,60};
int size = 6;
// printZeroAndOnes(arr,size);
extremPrint(arr,size);


  return 0;
}