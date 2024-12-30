 //CHeck subarray of sum k

// #include<iostream>
// using namespace std;

// void subarray(int arr[],int n, int k){
//   int count = 0;

// for(int i=0; i<n; i++){
//   int sum = 0;
//   for(int j=i; j<n; j++){
//     sum += arr[j];
//     if(sum == k) count++;
//   }
// }
// return count;
// }

// int main(){

// int arr[] = {10,5,2,7,1,9};
// int n = 6;
// int k = 17;


// subarray(arr,n,k);
//   return 0;
// }


//cheack maxAvreage of subarray

#include <iostream>
#include <algorithm>
#include <vector>
#include <climits> // For INT_MIN
using namespace std;

double maxAverage(vector<int> nums, int k) {
    int n = nums.size();
    if (n < k) return 0; // Edge case: Array smaller than k

    double maxAverage = INT_MIN;
    int currentSum = 0;

    // Calculate the sum of the first `k` elements
    for (int i = 0; i < k; i++) {
        currentSum += nums[i];
    }

    // Initialize the maximum average with the first window
    maxAverage = static_cast<double>(currentSum) / k;

    // Slide the window
    for (int i = k; i < n; i++) {
        currentSum += nums[i] - nums[i - k]; // Add next element and remove the first element of the window
        maxAverage = max(maxAverage, static_cast<double>(currentSum) / k);
    }

    return maxAverage;
}

int main() {
    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;

    double result = maxAverage(nums, k); // Call the function and store the result
    cout << "The maximum average of subarrays of size " << k << " is: " << result << endl;

    return 0;
}
