//Duplicate element problem in GFG

// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// void duplicatelement(vector<int>arr){
//   int n = arr.size();
//   sort(arr.begin(), arr.end());
//   for(int i=0; i<n; i++){
//     if(arr[i] == arr[i+1]){
//       cout<< arr[i]<<" ";
//     }
//   }
// }

// int main(){

// vector<int>arr = {3,4,5,7,8,1,2,1,3};

// duplicatelement(arr);

//   return 0;
// }


//First Reapeating Element
#include<iostream>
using namespace std;


// int  firstrepatedElement(int arr[], int n){
//   for(int i=1; i<n; i++){
//     for(int j=i+1; j<n; j++){
//         if(arr[i] == arr[j]) 
//          cout<<arr[i]<<" ";
//     }
//   }
//   return -1;
// }

//optimal way
void firstrepatedElement(int arr[],int n ){
  for(int i=1; i<n; i++){
    if(i==arr[i]){
      cout<<i<<" ";
      break;
    }
  }
}

int main(){
 int arr[] = {1,5,3,4,3,5,6};
 int n = 7;

firstrepatedElement(arr,n);

  return 0;
}




//Common in 3 Sorted Arrays
