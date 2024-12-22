// //Roated array 

// #include<iostream>
// using namespace std;

// void roatedArray(int arr[], int n, int shift){
//   int finalshift = shift%n;

//     if(shift == 0){
//       return ;
//     }

//     int temp[10000];
//     int index = 0;
//     for(int i=n-finalshift; i<n; i++){
//          temp[index] = arr[i];
//          index++;
//     }

//     for(int i=n-1;i>=0; i--){
//       arr[i] = arr[i-finalshift];
//     }

//     for(int i=0;i<finalshift;i++){
//        arr[i] = temp[i];
//     }

 
// }


// int main(){

//    int arr[] = {1,2,3,4,5} ;
//    int size = 5;

//    int shift = 3;

//    cout<<"Before Array : ";
//    for(int i=0; i<size; i++){
//      cout<<arr[i]<<" ";
//    }
//     cout<<endl;

//     roatedArray(arr, size , shift);

//     cout<<"After array : ";
//    for(int i=0; i<size; i++){
//      cout<<arr[i]<<" ";
//    }


//    return 0;
// }




// #include <iostream>
// #include <vector>
// using namespace std;

// // Function to reverse a portion of the array
// void reverse(vector<int>& arr, int start, int end) {
//     while (start < end) {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// // Function to rotate the array to the left by d steps
// void rotateArray(vector<int>& arr, int d) {
//     int n = arr.size();
//     d = d % n; // Normalize d
    
//     // Step 1: Reverse the first d elements
//     reverse(arr, 0, d - 1);
    
//     // Step 2: Reverse the remaining n-d elements
//     reverse(arr, d, n - 1);
    
//     // Step 3: Reverse the entire array
//     reverse(arr, 0, n - 1);
// }

// int main() {
//     // Example inputs
//     vector<int> arr1 = {1, 2, 3, 4, 5};
//     int d1 = 2;
//     rotateArray(arr1, d1);
//     for (int num : arr1) {
//         cout << num << " ";
//     }
//     cout << endl;
//     return 0;
// }


//find largest element of array
#include<iostream>
using namespace std;

int findLargest(int arr[], int n){
  int largest = arr[0];
  for(int i=0; i<n; i++){
    if(arr[i]>largest){
      largest = arr[i];
    }
    if(arr[i] > largest && largest < arr[i]){
      cout<<second<<endl;
    }
  }
  return largest;
}

int main(){
 int arr[] = {12, 35, 1, 10, 34, 1};
 int n = 6;
 
 int largestnum = findLargest(arr,n);
 cout<<" The largest value of array is : "<<largestnum<<endl;
  return 0;
}