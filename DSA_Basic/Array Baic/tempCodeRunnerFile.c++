
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