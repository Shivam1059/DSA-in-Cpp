//indexes of subarray sum

#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int>arr = {1,2,3,7,5};
int n = arr.size();
int target = 12;

 for(int i=0; i<n; i++){
   int sum =0;
   for(int j=i; j<n; j++)
      sum += arr[j];
     if(sum == target)
      cout<<sum<<" ";
  }

  return 0;
}
