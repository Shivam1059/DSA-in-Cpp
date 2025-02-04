#include <iostream>
#include <vector>

using namespace std;

int getPivotIndex(vector<int>& arr) {
    int n = arr.size();
    int s = 0, e = n - 1;

    while (s < e) {
        int mid = s + (e - s) / 2;
        
        if (mid + 1 < n && arr[mid] > arr[mid + 1])
            return mid;

        if (mid - 1 >= 0 && arr[mid] < arr[mid - 1])
            return mid - 1;

        if (arr[s] > arr[mid]) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return s;  // Pivot might be at s
}

int binarySearch(vector<int>& arr, int s, int e, int target) {
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (target > arr[mid]) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return -1;
}

bool search(vector<int>& arr, int target) {
    int n = arr.size();
    int pivotIndex = getPivotIndex(arr);

    // Search in left part (0 to pivot)
    if (target >= arr[0] && target <= arr[pivotIndex]) {
        return binarySearch(arr, 0, pivotIndex, target) != -1;
    }
    // Search in right part (pivot+1 to n-1)
    else if (target >= arr[pivotIndex + 1] && target <= arr[n - 1]) {
        return binarySearch(arr, pivotIndex + 1, n - 1, target) != -1;
    }
    return false;
}

int main() {
    vector<int> arr = {50, 60, 70, 10, 20, 30, 40};
    int target = 20;
    bool ans = search(arr, target);
    cout << (ans ? "Found" : "Not Found") << endl;
}
