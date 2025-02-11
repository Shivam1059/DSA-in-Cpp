//PRATA -ROTI   SPOJ

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool isPossibleTme(vector<int>parata,int mid,int nP ){
  int currP = 0;
  for(int i=0; i<parata.size();i++){
   int R = parata[i],  j = 1;
   int parataTime = 0;
   
   while(true){
     if(parataTime + j * R <= mid){
       ++currP;
       parataTime += j*R;
      ++j;
    }
    else{
      break;
  }

   if(currP >= nP){
     return true;
    }
  }
}
  return false;
}

int fourthparata( vector<int>parata, int nP){
  int st = 0; 
  int highestRank = *max_element(parata.begin(),parata.end());
  int end = highestRank*(nP * (nP + 1)/2);
  int ans = -1;;

  while(st <= end){
    int mid = st + (end - st)/2;

    if(isPossibleTme(parata,nP,mid)){
      ans = mid ;
      st = mid + 1;
    }else{
      end = mid -1;
    }
  }
   return ans;
}