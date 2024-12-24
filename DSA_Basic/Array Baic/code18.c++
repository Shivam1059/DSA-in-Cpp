#include<iostream>
#include <algorithm>
using namespace std;



int findlargest(int arr[], int n){
    // sort(arr, arr+6);
    int num = arr[0];
   for(int i=0; i<n; i++){
      if(arr[i]>num)
       num = arr[i];
   }
    return num;
}


int main(){
  
  int arr[] = {1,8,9,56,90};
  int size = 5;

 int ans = findlargest(arr,size);
 cout<<"Largest value is : "<<ans;


  return 0;
}