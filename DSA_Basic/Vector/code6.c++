//Majority Element


#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int>arr,int n){
  int count = 0;
  for(int i=0; i<n; i++){
    for(int j=i; j<n; j++){
      if(arr[i]==arr[j]){
        count++;
      }
      else if(count > n/2){
        return count;
      }
    }
  }
  return -1;


}

int main(){

vector<int>arr = {3,1,3,3,2};
int n = arr.size();

int ans = majorityElement(arr, n);
cout<<ans<<" ";

  return 0;
}