//Peak value in Mountain array
#include <iostream>
#include <algorithm> 
#include <climits>
#include<vector>

using namespace std;

 int peakIndexMountainArray(vector<int>arr){
   int max = INT_MIN;
   int maxindex = -1;
   for(int i=0; i<arr.size(); i++){
    if(arr[i] > max){
      max = arr[i];
      maxindex = i;
    }
   }
    return maxindex;
 }

int main(){

 vector<int>arr = {0,2,1,0};
 int num = peakIndexMountainArray(arr);
 cout<<num; 

  return 0;
}