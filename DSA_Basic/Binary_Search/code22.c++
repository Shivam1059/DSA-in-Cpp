//Aggresive Cow problem

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

                              //mid  = minAllowesDistenc
int isPossible(vector<int> &arr, int n, int c, int minAloowdist){

    int cows = 1; 
    int laststallPos = arr[0];

   for(int i=1; i<n; i++){
    if((arr[i] - laststallPos) >= minAloowdist ){
      cows++;
      laststallPos = arr[i];
    }
    if(cows == c) return true;
   }
   return false;
}
int aggresiveCow(vector<int>arr, int n, int c){
  sort(arr.begin(), arr.end());//NlogN

  int start = 1;
  int end = arr[n-1]-arr[0];
  int ans = -1;

  while(start <= end){     //O(log(Range)*N)
    int mid = start + (end - start)/2;
   
    if(isPossible(arr,n,c,mid)){ //right
      ans = mid ;
      start = mid + 1;
    }
    else{  //left
      end = mid - 1;
    }
  }
  return ans ;
}

int main(){

vector<int>arr = {1,2,8,4,9};
int n = 5;
int c = 3;

cout<<aggresiveCow(arr, n, c);

  return 0;
}


