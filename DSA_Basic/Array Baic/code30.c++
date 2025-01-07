//TWO sum-pair with 0 sum


#include<iostream>
#include<vector>
using namespace std;

void twosum(vector<int>arr) {
  int n = arr.size();
  int ans ;
 for(int i=0; i<n; i++){
  for(int j=i+1; j<n; j++){
    if( arr[i] + arr[j] == 0);
  }
    return ans;
  }
}
int main(){

 vector<int>arr = {-1,0,1,2,-1,-1};
 int n = arr.size();

twosum(arr);


  return 0;
}
