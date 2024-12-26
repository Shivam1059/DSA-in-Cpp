//move all zerp element to end;

// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main(){

// int arr[8] = {1,2,0,4,3,0,5,0};
// int n = 8; 
//         sort(arr, arr+n);

//         for(int i=0; i<n; i++){
//           cout<<arr[i]<<" ";
//         }


//   return 0;
// }


//Roted array 

#include<iostream>
using namespace std;

void roted(int arr[], int n, int d){
    d = d%n;
    int temp[d];
    for(int i=0; i<d; i++){
      temp[i] = arr[i];
    }
    for(int i = d; i<n; i++){
      arr[i-d] = arr[i];
    }
    for(int i=n-d; i<n; i++){
      arr[i] = temp[i-(n-d)];
    }
}

int main(){
 
 int arr[7] = {1,2,3,4,5,6,7};
 int n = 7;
 int d = 4;

roted(arr,n,d);
for(int i=0; i<n; i++){
  cout<<arr[i]<<" ";
}

 return 0;
}