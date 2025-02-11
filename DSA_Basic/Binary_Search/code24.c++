//EKO SPOJ

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool isPossibleSolution(vector<long long int>tree, long long int m, long long int mid ){
    long long int woodCollected = 0;
    for(int i=0;i<tree.size(); i++){
       if(tree[i] > mid){
        woodCollected += tree[i] - mid;
       }
    }
    return woodCollected >= m;
}


long long int maxSawBladeHeight(vector<long long int>&tree,long long int m){
  long long  int end =  *max_element(tree.begin(),tree.end());
  long long int st = 0;
  long long int ans = -1;

  while(st <= end){
  long long   int mid = st + (end - st)/2;

    if(isPossibleSolution(tree,m,mid)){
      ans = mid;
      st = mid + 1;
    }else{
      end = mid - 1;
    }
  }
  return ans;
}



int main(){

  vector<long long int>tree = {20,15,10,17};

 long long int m = 7;
  
cout << maxSawBladeHeight(tree, m)<<endl;

  return 0;
}