//Kth element of two array

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int kthElemet(vector<int>&a, vector<int>&b, int n, int m, int k)
{

  vector<int>num;

  //insert value of vector a in num;
  for(int i=0; i<n; i++){
    num.push_back(a[i]);
  }
  for(int i=0; i<m; i++){
    num.push_back(a[i]);
  }

  //sort 
  sort(num.begin(),num.end());
  if(k > 0 && k < num.size()){
    return num[k-1];
  }
  else{
    return -1;
  }

}
int main(){

  vector<int>a = {2,3,6,7,9};
  vector<int>b = {1,4,8,10};

  int n = a.size();
  int m = b.size();
  int k = 5;

  int ans = kthElemet(a,b,n,m,k);
  cout<<" kth element : "<<ans;
}