///Array Duplicates 

#include<iostream>
using namespace std;

int  duplicate(int arr[], int n){
        int num = arr[0];
        for(int i=0; i<n; i++){
            if(arr[i] == num ){
                num = arr[i];
                cout<<arr[i]<<" ";
            }
        }
        
}
y7
int main(){

int arr[5] = {2,3,1,2,3};
int n = 5;


duplicate(arr,n);

  return 0;
}
