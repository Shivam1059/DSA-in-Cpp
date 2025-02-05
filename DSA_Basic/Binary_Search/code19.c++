//Squre Root 

#include<iostream>
using namespace std;

int squareRoot( int m){
  int s = 0;
  int e = m;
  int ans = -1;

  while(s <= e){
    int mid = s + (e -s)/2;

    if((mid*mid) == m){
      return mid;
    }

    if((mid*mid) < m){
      ans = mid;
      s = mid +1;
    }else{
      e = mid - 1;
    }
  }
  return ans;
}


int main(){
 
  int  m = 289;

 int ans = squareRoot(m);
 cout<<" Square root is : "<<ans;

  return 0;
}