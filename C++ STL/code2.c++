// 
#include<iostream>
using namespace std;

int main(){

 int prices[6] = {7,1,5,3,6,4};

 int n = prices.size();
 int min = INT_MAX;
    int max = INT_MIN;
    int n = prices.size();
    for(int i = 0; i<n; i++){
        int mini = min(mini, prices[i]);   
    }

    for(int i=1; i<n; i++){
        int maxi = max(maxi,prices[i]);
    }

    int ans = maxi-mini;
    cout<<ans<<" ";


  return 0;
}