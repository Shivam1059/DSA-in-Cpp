//indexes of subarray sum

#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int>arr = {1,2,3,7,5};
int n = arr.size();
int target = 12;

 for (int end = 0; end < n; end++) {
            sum += arr[end];

            // Shrink the window from the left if the sum exceeds the target
            while (sum > target && start <= end) {
                sum -= arr[start];
                start++;
            }

            // If the sum matches the target, return the 1-based indices
            if (sum == target) {
                return {start + 1, end + 1};
            }
        }

        // If no subarray is found, return -1
        return {-1};

  return 0;
}
