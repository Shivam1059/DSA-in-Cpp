//Merge Sorted Array 

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int main(){

vector<int>nums1 = {1,2,3,0,0,0};
int n = nums1.size();

vector<int>nums2 = {2,5,6};
int m = nums2.size();
int left = n-1; 
int right = m-1;
int  k = m+n - 1;
while(left >= 0 && right < m){
  if(nums1[left] > nums2[right]){
    swap(nums1[left], nums2[right]);
    left--, right++;
  }
 else{
  break;
 }
}
  for(int j=0; j<m; j++){
     int p = nums2[j];
      auto it = nums1.begin()+3;
      nums1.insert(it, p);
  }


for(int k=0; k<n; k++){
  cout<<nums1[k]<<" ";
}

  return 0;
}