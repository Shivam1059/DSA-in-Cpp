//Squart Pricision

#include<iostream>
using namespace std;

int squrRoot(int n){

  int  s = 0;
  int e = n;
  int ans = 0;
  while(s <= e){
  int mid =  (s+e)>>1;
    //right 
     if((mid*mid) <= n){
      int ans = mid;
      s = mid + 1;
     } //left
     else{
      e = mid -1;
     } 
  }
  return ans;
}

double myPrecisionSqrt(int n){
  double sqrt = squrRoot(n);
  int precision = 3;
  double step = 0.1;

  while(precision--){
    double j = sqrt;

    while( j * j <= n){
      sqrt  = j;
      j += step;
    }

    step /= 10;
  }
  return sqrt;
  
}


int main(){
 
 int  n = 63;
 
 double ans = myPrecisionSqrt(n);
 cout <<" ANS : "<<ans;
  return 0;
}