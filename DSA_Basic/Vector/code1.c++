//find largest element of vector

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

 vector<int>v = {1,4,3,2,6,5};
 int n = v.size();

 reverse(v.begin(), v.end());
 for(int i=0; i<n;i++){
    cout<<v[i]<<" ";
 }
 




  return 0;
}