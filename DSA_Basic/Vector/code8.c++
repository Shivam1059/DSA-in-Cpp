//Floor in a sorted array

#include<iostream>
#include<vector>
using namespace std;

int  findelement(vector<int>arr){
  int n = arr.size();
    int k = 1;

  for(int i=0; i<n; i++){
    if(arr[i] <= k)
    return i;
  }
  return -1;
}

int main(){
  
  vector<int>arr = {1,2,8};
  int n = arr.size();

int ans = findelement(arr);
cout<<" value is : "<<ans;

  return 0;
}
