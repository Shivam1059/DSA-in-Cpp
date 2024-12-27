//Rotead array

#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int>& arr, int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rotateLeft(vector<int>& arr, int d) {
    int n = arr.size();
    d = d % n; // Normalize d in case it's larger than n

    // Step 1: Reverse the first d elements
    reverse(arr, 0, d - 1);

    // Step 2: Reverse the remaining elements
    reverse(arr, d, n - 1);

    // Step 3: Reverse the entire array
    reverse(arr, 0, n - 1);
} 

int main(){

 vector<int> arr1 = {1, 2, 3, 4, 5};
    int d1 = 2;

    rotateLeft(arr1, d1);
    for (int num : arr1) {
        cout << num << " ";
    }
    cout << endl;

    // vector<int> arr2 = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    // int d2 = 3;

    // rotateLeft(arr2, d2);
    // for (int num : arr2) {
    //     cout << num << " ";
    // }
    // cout << endl;

    // vector<int> arr3 = {7, 3, 9, 1};
    // int d3 = 9;

    // rotateLeft(arr3, d3);
    // for (int num : arr3) {
    //     cout << num << " ";
    // }
    // cout << endl;

    return 0;
 

    return 0;
}