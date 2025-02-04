// //"Divide"  and "Divisers"

#include<iostream>
using namespace std;

int getQuotient(int dividend, int divisor){

int s = 0;
int e = dividend;

int ans = -1;

while( s<=e ){
  int mid = s + ( (e - s) >> 1);
  //print mid
  if((divisor * mid ) == dividend){
    return mid;
  }

//store and compute
  if((divisor * mid) < dividend){
    ans = mid;
    s = mid+1;
  }
  else{
    //left
     e = mid -1;
  }
}
 return ans ;
}

int main(){

 int dividend = 10;
 int divisor = -2;

 int ans = getQuotient( abs(dividend), abs(divisor));
//ans answer positiove value k hisaab se aara h
 if((dividend<0 && divisor>0 ) || (dividend>0 && divisor<0)){
  ans = 0-ans;
 }
 cout<< " Final Ans : " <<ans <<endl;


  return 0;
}


// #include <iostream>
// using namespace std;

// int getQuotient(int dividend, int divisor) {
//     int s = -dividend;
//     int e = dividend;
//     int mid;
//     int ans = -1;

//     while (s <= e) {
//         mid = s + ((e - s) >> 1); 
//         if ((divisor * mid) == dividend) {
//             return mid;
//         }

//         if ((divisor * mid) < dividend) {
//             ans = mid;
//             s = mid + 1;
//         } else {
//             e = mid - 1;
//         }
//     }
//     return ans;
// }

// int main() {
//     int dividend = 10;
//     int divisor = 3;

//     int ans = getQuotient(dividend, divisor);
//     cout << "Final Ans: " << ans << endl;

//     return 0;
// }
