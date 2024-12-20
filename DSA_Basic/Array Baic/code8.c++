//Find duplicate number in give array

#include<iostream>
using namespace std;

int main(){
  int arr[8] = {3,5,6,8,7,2,3,9};
  int size = 8;

  for(int i=0; i<size; i++){
    for(int j = i+1; j<size; j++){
      if(arr[j]==arr[i]){
        cout<<arr[i];
      }
    }
    return -1;
  }

  return 0;
}



