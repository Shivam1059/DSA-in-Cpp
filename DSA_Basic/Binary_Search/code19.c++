// //Squre Root 

// #include<iostream>
// using namespace std;

// int squareRoot( int m){
//   int s = 0;
//   int e = m;
//   int ans = -1;

//   while(s <= e){
//     int mid = s + (e -s)/2;

//     if((mid*mid) == m){
//       return mid;
//     }

//     if((mid*mid) < m){
//       ans = mid;
//       s = mid +1;
//     }else{
//       e = mid - 1;
//     }
//   }
//   return ans;
// }


// int main(){

//   int  m = 289;

//  int ans = squareRoot(m);
//  cout<<" Square root is : "<<ans;

//   return 0;
// }

//Dividend and Diviser

#include<iostream>
using namespace std;

int  getQuestent(int dividend, int divisor){

  int s = 0;
  int e = dividend;
  int ans = -1;

  while(s <= e){
    int mid = s + ((e-s)>>1) ;

    //print mid
    if( (divisor * mid) == dividend)
      return mid;
    
    //store and Compute
    if((divisor * mid )< dividend){
      int ans = mid;
      s = mid + 1; //right
    }else{
      //left
      e = mid -1;
    }
  }
  return ans;
}

int main(){

 int dividend = 10;
 int divisor = -2;

 int answer = getQuestent(abs(dividend), abs(divisor));
 //ans answer positiove value k hisaab se aara h
 if((dividend<0 && divisor>0 ) || (dividend>0 && divisor<0)){
  answer = 0-answer;
 }
 cout<< " Final Ans : " <<answer <<endl;


  return 0;
}