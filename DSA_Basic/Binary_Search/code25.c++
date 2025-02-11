//PRATA -ROTI   SPOJ

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool isPossibleTme(vector<int>& parata, int mid, int nP) {
    int currP = 0; // Count of parathas cooked
    for (int i = 0; i < parata.size(); i++) {
        int R = parata[i], j = 1;
        int parataTime = 0;

        while (true) {
            if (parataTime + j * R <= mid) {
                ++currP;
                parataTime += j * R;
                ++j;
            } else {
                break;
            }

            if (currP >= nP) { // Stop early if we already cooked enough parathas
                return true;
            }
        }
    }
    return false;
}

int fourthparata(vector<int>& parata, int nP) {
    int st = 0;
    int highestRank = *max_element(parata.begin(), parata.end());
    int end = highestRank * (nP * (nP + 1) / 2);
    int ans = -1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (isPossibleTme(parata, mid, nP)) { // Corrected parameter order
            ans = mid;
            end = mid - 1; // Reduce the upper bound to find the minimum time
        } else {
            st = mid + 1;
        }
    }
    return ans;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int nP, nC;
        cin >> nP >> nC; // Fixed input handling
        vector<int> parata(nC);

        for (int i = 0; i < nC; i++) {
            cin >> parata[i];
        }

        cout << fourthparata(parata, nP) << endl;
    }

    return 0;
}
